#include <stdlib.h>
#include <unistd.h>

int	is_valid_input(char *str);
int	*parse_input(char *str);
int	**allocate_matrix(void);
void	free_matrix(int **matrix);
void	print_matrix(int **matrix);
int	is_valid(int **matrix, int *input);
int	is_safe(int **matrix, int row, int col, int num);
int	solve(int **matrix, int *input, int row, int col);

#define SIZE 4

int	main(int argc, char **argv)
{
	int	**matrix;
	int	*input;

	if (argc != 2 || !is_valid_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	input = parse_input(argv[1]);
	matrix = allocate_matrix();
	if (!matrix || !input)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(matrix, input, 0, 0)) // Tenta resolver o problema
	{
		print_matrix(matrix); // Se encontrarmos uma solução, é imprmido
	}
	else
		write(1, "Error\n", 6);
	free(input);
	free_matrix(matrix);
	return (0);
}

// Verifica se os valores do inseridos no Input são válidos
int	is_valid_input(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || (str[i] == ' '))
		{
			if (str[i] >= '1' && str[i] <= '4')
				count++;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (count == 16);
}

// Converter o Input para um Array de Inteiros
int	*parse_input(char *str)
{
	int	*input;
	int	i;
	int	j;

	i = 0;
	j = 0;
	input = (int *)malloc(16 * sizeof(int));
	if (!input)
		return (NULL);
	while (str[i] != '\0') // Percorrer a String
	{
		if (str[i] >= '1' && str[i] <= '4') // Quando encontra um número válido
		{
			input[j] = str[i] - '0'; // Converte o caractere numerico para um inteiro ('5' - '0' == 53 - 48 = 5)
			j++;
		}
		i++;
	}
	return (input); // Retorna um array de inteiros
}

// Alocar uma matriz de 4x4
int	**allocate_matrix(void)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(4 * sizeof(int *)); // Aloca um array de 4 ponteiros
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < 4) // Para cada linha, aloca-se espaço para 4 inteiros
	{
		matrix[i] = (int *)malloc(4 * sizeof(int));
		if (!matrix[i])
			return (NULL);
		i++;
	}
	return (matrix); // Retorna matrix alocada
}

// Libera espaço da memória 
void	free_matrix(int **matrix)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

// Função de impressão da matriz
void	print_matrix(int **matrix)
{
	int	i;
	int	j;
	char c;
	
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
            		c = matrix[i][j] + '0';  // Converte inteiro para caractere
            		write(1, &c, 1);
            		if (j < SIZE - 1)
	    		{
                		write (1, " ", 1);  // Adiciona espaço entre os números
            		}
			j++;
        	}
		i++;
        	write(1, "\n", 1);  // Nova linha após cada linha da matriz
	}
}

// Verifica se a matriz é valida com base nas restrições
int	is_valid(int **matrix, int *input)
{
	int i, j, visible, max;

	// Verificação da visibilidade nas linhas (da esquerda para a direita e vice-versa)
	i = 0;
	while ( i < SIZE)
	{	
		// Esquerda para direita
		visible = 0;
		max = 0;
		j = 0;
		while (j < SIZE) 
		{
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				visible++;
			}
			j++;
		}
		if (input[i] != 0 && visible != input[i])
			return (0);

		// Direita para esquerda
		visible = 0;
		max = 0;
		for (j = SIZE - 1; j >= 0; j--) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				visible++;
			}
		}
		if (input[SIZE + i] != 0 && visible != input[SIZE + i])
			return (0);
		i++;
	}

	// Verificação da visibilidade nas colunas (de cima para baixo e vice-versa)
	for (j = 0; j < SIZE; j++) {
		// De cima para baixo
		visible = 0;
		max = 0;
		for (i = 0; i < SIZE; i++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				visible++;
			}
		}
		if (input[2 * SIZE + j] != 0 && visible != input[2 * SIZE + j])
			return (0);

		// De baixo para cima
		visible = 0;
		max = 0;
		for (i = SIZE - 1; i >= 0; i--) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				visible++;
			}
		}
		if (input[3 * SIZE + j] != 0 && visible != input[3 * SIZE + j])
			return (0);
	}
	return (1);
}

int	is_safe(int **matrix, int row, int col, int num)
{
	int	i;

	i = 0;
	while ( i < SIZE) // Verifica se o número já existe na linha
	{
		if (matrix[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE) // Verifica se o número já existe na coluna
	{
		if (matrix[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1); // Se não existir nem na linha nem na coluna é seguro tentar esse número

}

// Tenta preencher a matrix celular por célula, verificando todas as possíveis combinações de números de 1 a 4.
int solve(int **matrix, int *input, int row, int col) {
    int num;

    if (row == SIZE)
    {
        if (is_valid(matrix, input)) 
	{
            return 1; // Solução encontrada
        }
        return 0; // Solução não válida
    }
    if (col == SIZE)
        return solve(matrix, input, row + 1, 0); // Próxima linha

    for (num = 1; num <= SIZE; num++)
    {
        if (is_safe(matrix, row, col, num))
		{
			matrix[row][col] = num;

			if (solve(matrix, input, row, col + 1))
				return 1;
		}
    }
    matrix[row][col] = 0; // Reverter a mudança (backtracking)
    return 0; // Nenhum número válido encontrado, volta atrás
}
