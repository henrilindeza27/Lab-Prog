/**
 * @file    functions-team-15.c
 * @author  Henrique Veríssimo / Martim Afonso / Afonso Paraíba / Maria Terrinha / Tomé Pedro / Ana Amoreira
 * @version 1.0
 */

#include "functions-team-15.h"


/**
 *
 * Esta função imprime um banner com um design decorativo de vetor no console.
 */
void ft_banner_vetor(void)
{
	printf("╔═════════════════════════════════════════════════════════════════╗\n");
	printf(" ▗▄▄▄▖▗▖  ▗▖ ▗▄▄▖▗▄▄▄▖▗▄▄▖ ▗▄▄▄▖▗▄▄▖     ▗▖  ▗▖▗▄▄▄▖▗▄▄▄▖▗▄▖ ▗▄▄▖  \n");
	printf("   █  ▐▛▚▖▐▌▐▌   ▐▌   ▐▌ ▐▌  █  ▐▌ ▐▌    ▐▌  ▐▌▐▌     █ ▐▌ ▐▌▐▌ ▐▌ \n");
	printf("   █  ▐▌ ▝▜▌ ▝▀▚▖▐▛▀▀▘▐▛▀▚▖  █  ▐▛▀▚▖    ▐▌  ▐▌▐▛▀▀▘  █ ▐▌ ▐▌▐▛▀▚▖ \n");
	printf(" ▗▄█▄▖▐▌  ▐▌▗▄▄▞▘▐▙▄▄▖▐▌ ▐▌▗▄█▄▖▐▌ ▐▌     ▝▚▞▘ ▐▙▄▄▖  █ ▝▚▄▞▘▐▌ ▐▌ \n");
	printf("╚═════════════════════════════════════════════════════════════════╝\n\n");

}

/**
 * 
 * Esta função limpa a tela e imprime um banner final com arte ASCII.
 * O banner inclui um texto decorativo e uma mensagem de agradecimento.
 * 
 * A função usa a função `ft_clear_screen` para limpar a tela antes
 * de imprimir o banner.
 */
void ft_final_banner(void)
{
	ft_clear_screen();
	printf(
        "▗▄▄▖ ▗▄▄▖  ▗▄▖  ▗▄▄▖▗▄▄▖  ▗▄▖ ▗▖  ▗▖ ▗▄▖     ▗▄▄▄▖▗▖  ▗▖ ▗▄▄▖▗▄▄▄▖▗▄▄▖ ▗▄▄▖  ▗▄▖ ▗▄▄▄  ▗▄▖ \n"
        "▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌   ▐▌ ▐▌▐▌ ▐▌▐▛▚▞▜▌▐▌ ▐▌    ▐▌   ▐▛▚▖▐▌▐▌   ▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌  █▐▌ ▐▌\n"
        "▐▛▀▘ ▐▛▀▚▖▐▌ ▐▌▐▌▝▜▌▐▛▀▚▖▐▛▀▜▌▐▌  ▐▌▐▛▀▜▌    ▐▛▀▀▘▐▌ ▝▜▌▐▌   ▐▛▀▀▘▐▛▀▚▖▐▛▀▚▖▐▛▀▜▌▐▌  █▐▌ ▐▌\n"
        "▐▌   ▐▌ ▐▌▝▚▄▞▘▝▚▄▞▘▐▌ ▐▌▐▌ ▐▌▐▌  ▐▌▐▌ ▐▌    ▐▙▄▄▖▐▌  ▐▌▝▚▄▄▖▐▙▄▄▖▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▙▄▄▀▝▚▄▞▘\n\n\n"
    );
	 printf(
        "         _nnnn_                      \n"
        "        dGGGGMMb     ,\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\".\n"
        "       @p~qp~~qMb    | Obrigado por usar! |\n"
        "       M|@||@) M|   _;....................'\n"
        "       @,----.JM| -'\n"
        "      JS^\\__/  qKL\n"
        "     dZP        qKRb\n"
        "    dZP          qKKb\n"
        "   fZP            SMMb\n"
        "   HZM            MMMM\n"
        "   FqM            MMMM\n"
        " __| \".        |\\dS\"qML\n"
        " |    `.       | `' \\Zq\n"
        " _)      \\.__.,|     .'\n"
        "\\____   )MMMMMM|   .'\n"
        "     `-'       `--' \n"
    );
}
/**
 *
 * Esta função imprime um banner decorativo no console, que inclui
 * o nome da equipa e alguns elementos gráficos.
 */
void ft_banner_team(void)
{
	printf("╔═════════════════════════════════════════════════════════╗\n");
	printf("║                                                         ║ \n");
	printf("║   ████████ ███████  █████  ███    ███      ██ ███████   ║\n");
	printf("║      ██    ██      ██   ██ ████  ████     ███ ██        ║\n");
	printf("║      ██    █████   ███████ ██ ████ ██      ██ ███████   ║\n");
	printf("║      ██    ██      ██   ██ ██  ██  ██      ██      ██   ║\n");
	printf("║      ██    ███████ ██   ██ ██      ██      ██ ███████   ║\n");
	printf("║                                                         ║ \n");
	printf("╠═════════════════════════════════════════════════════════╣\n");
}        

/**
 *
 * Esta função exibe uma barra de carregamento ou imprime o texto fornecido caractere por caractere
 * com base no parâmetro flag_carregamento. Se flag_carregamento estiver definido, exibe uma barra de carregamento.
 * Caso contrário, imprime o texto.
 *
 * @param texto Ponteiro para o texto a ser impresso. Se flag_carregamento estiver definido, este parâmetro pode ser NULL.
 * @param tamanho O comprimento do texto a ser impresso ou o número de iterações para a barra de carregamento.
 * @param flag_carregamento Flag para determinar o modo de operação. Se definido como 1, uma barra de carregamento é exibida.
 *                          Se definido como 0, o texto é impresso caractere por caractere.
 *
 */
void ft_carregamento(char *texto, size_t tamanho, int flag_carregamento) 
{

	if(!texto && !flag_carregamento)
	{
		printf("Parametro nome não pode ser NULL \n");
		return;
	}

	if(flag_carregamento)
    	printf("Carregando: [");
	
    for (int i = 0; i < tamanho; i++) 
	{
		if(flag_carregamento)
		{	
			printf("■");
			fflush(stdout);
        	usleep(50000);
		}
		else
        {	
			printf("%c", texto[i]);
			fflush(stdout);
			usleep(2000);
		}
    }

	if(flag_carregamento)
   	{	
		printf(" ] ✔");
		usleep(500000);
	}
	else
		printf("\n");
}                                                                                          


/**
 * 
 * Esta função limpa a tela, imprime uma moldura decorativa com texto dentro,
 * mostra uma barra de carregamento e espera que o usuário pressione Enter.
 * 
 * O texto exibido inclui:
 * - Uma borda superior e inferior feita de caracteres especiais.
 * - Um texto decorativo no meio.
 * 
 * A função chama as seguintes funções auxiliares:
 * - ft_clear_screen(): Limpa a tela do terminal.
 * - ft_barra_carregamento(): Exibe uma barra de carregamento.
 * - ft_wait_enter(): Espera que o usuário pressione a tecla Enter.
 */                                                    
void ft_mostrar_apresentação(void)
{	
	char *nomes[] = {
		"║ Henrique Veríssimo (53717)                              ║",
		"║ Ana Moreira (53676)                                     ║",
		"║ Martim Afonso (55201)                                   ║",
		"║ Maria Terrinha (54321)                                  ║",
		"║ Afonso Paraíba (54584)                                  ║",
		"║ Tomé Pedro (53702)                                      ║"
	};

	ft_clear_screen();
	ft_banner_team();

	printf("║ Membros:                                                ║\n");
	printf("║                                                         ║\n");
	for(int i = 0; i < 6; i++)
		ft_carregamento(nomes[i], strlen(nomes[i]), 0);
	printf("╚═════════════════════════════════════════════════════════╝\n");
	ft_carregamento(NULL, 20, 1);
	ft_wait_enter();

}
/**
 * Exibe o menu principal com várias opções e solicita ao usuário que selecione uma.
 *
 * Esta função imprime o menu principal com várias opções para o usuário escolher.
 * Em seguida, lê a entrada do usuário e a valida para garantir que esteja dentro do intervalo aceitável.
 * Se a entrada for inválida, o usuário é solicitado a inserir uma opção válida.
 *
 * @return A opção de menu selecionada (um inteiro entre 1 e 12).
 */
int ft_menu(void)
{
    int option;
	ft_banner_team();
    printf("╠════════════════════════  MENU  ═════════════════════════╣\n");
    printf("║- [01] Construir uma matriz 4x%d a partir do vetor       ║\n",N);
    printf("║- [02] Calcular o logoritmo de cada elemento do vetor    ║\n");
    printf("║- [03] Calcular a mediana do vetor                       ║\n");
    printf("║- [04] Ordenar os valores simétricos na ordem crescente  ║\n");
    printf("║- [05] Mostrar os valores > 2 e divisiveis por 5         ║\n");
    printf("║- [06] Soma da 1º metade do vetor com a 2º metade        ║\n");
    printf("╠═════════════════════════════════════════════════════════╣\n");
    printf("╠═════════════════  FUNÇÕES ADICIONAIS  ══════════════════╣\n");
    printf("║- [07] Mostrar menu de ajuda                             ║\n");
    printf("║- [08] Devolução vetor baralhado com o vetor ordenado    ║\n");
    printf("║- [09] Decompor os números impares                       ║\n");
    printf("║- [10] Devolução de uma matriz %dx%d                     ║\n",N,N);
    printf("║- [11] Matriz transposta da %dx%d criada                 ║\n",N,N);
    printf("║- [12] Sair                                              ║\n");
    printf("╚═════════════════════════════════════════════════════════╝\n");

    printf("Selecione a opção que deseja --> ");
    while (scanf("%d", &option) <= 0 || option < 1 || option > 12)
    {
        printf("Opção inválida, por favor digite uma opção válida -> ");
        ft_clean_input();
    }
    return (option);
}

/**
 * Gera uma matriz 4xN onde cada linha é uma cópia do vetor fornecido.
 *
 * @param vetor Vetor de inteiros de tamanho `N`, cujos elementos serão
 *              copiados para cada linha da matriz.
 * @return Ponteiro para a matriz 4xN (int**), ou NULL em caso de erro de alocação.
 *
 * @note A matriz retornada é alocada dinamicamente e deve ser liberada após o uso.
 */
int **ft_matriz_vetor(int vetor[N])
{
    int **matriz = (int **)malloc(4 * sizeof(int *));
    if(!matriz)
    {
        printf("Erro na alocação das linhas da matriz!\n");
		return (NULL);
    }

    for(int i = 0; i < 4 ; i++)
    {
        matriz[i] = (int *)malloc(N * sizeof(int));
        if(!matriz[i])
        {
            printf("Erro na alocação das colunas da matriz!\n");
            return (NULL);
        }
    }

    for(int j = 0; j < 4; j++)
        for(int z = 0; z < N; z++)
            matriz[j][z] = vetor[z];
    
	return (matriz);
}


/**
 *  Calcula a mediana de um vetor de inteiros.
 *
 * Esta função recebe um vetor de inteiros e calcula sua mediana.
 * Primeiro, ordena o vetor em ordem crescente e depois encontra o valor
 * da mediana. Se o número de elementos no vetor for par, a mediana é
 * calculada como a média dos dois elementos do meio.
 *
 * @param vetor O vetor de inteiros para o qual a mediana será calculada.
 * @return O valor da mediana do vetor como um float.
 */
float	ft_mediana(int vetor[N])
{
	float	mediana;
	int		*vetor_ordenado;
	int		index;

	vetor_ordenado = ft_vetor_ordenado_crescente(vetor, 0);
	index = N / 2;
	mediana = ((float)vetor_ordenado[index - 1] + (float)vetor_ordenado[index]) / 2;

	return (mediana);
}

/**
 *  Ordena um vetor em ordem crescente.
 *
 * Esta função recebe um vetor de inteiros e uma flag indicando se o vetor deve ser tratado como simétrico.
 * Ela retorna um novo vetor com os elementos ordenados em ordem crescente.
 *
 * @param vetor O vetor de inteiros a ser ordenado.
 * @param flag_simetrico Se diferente de zero, os elementos do vetor são negados antes da ordenação.
 * @return Um ponteiro para o novo vetor alocado com os elementos ordenados, ou NULL se a alocação de memória falhar.
 */
int	*ft_vetor_ordenado_crescente(int vetor[N], int flag_simetrico)
{
	int	*vetor_ordenado;
	int	tmp;
	int	i;

	i = -1;
	vetor_ordenado = (int *)malloc(sizeof(int) * N);

	if (!vetor_ordenado)
	{
		printf("Erro na alocação do vetor_ordenado!\n");
		return (NULL);
	}

	while (++i < N)
	{
		if (flag_simetrico)
			vetor_ordenado[i] = vetor[i] * -1;
		else
			vetor_ordenado[i] = vetor[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (vetor_ordenado[i] < vetor_ordenado[j])
			{
				tmp = vetor_ordenado[i];
				vetor_ordenado[i] = vetor_ordenado[j];
				vetor_ordenado[j] = tmp;
			}
		}
	}

	return (vetor_ordenado);
}


/**
 *  Cria um vetor simétrico a partir do vetor fornecido.
 *
 * Esta função recebe um vetor de entrada e gera um vetor simétrico
 * ordenando os elementos em ordem crescente.
 *
 * @param vetor O vetor de entrada de tamanho N.
 * @return Um ponteiro para o vetor simétrico recém-criado.
 */
int	*ft_vetor_simetrico(int vetor[N])
{
	int	*vetor_simetrico = ft_vetor_ordenado_crescente(vetor, 1);

	return (vetor_simetrico);
}

/**
 *  Encontra o maior número no vetor que é divisível por 5 e maior que 2
 *
 * Esta função itera pelo vetor de entrada `vetor` de tamanho `N`, conta quantos elementos
 * são maiores que 2 e divisíveis por 5, e armazena esses elementos em um vetor alocado dinamicamente e após 
 * isso imprime o `vetor` e liberta a memória dele
 *
 * @param vetor Um vetor de inteiros de tamanho `N`.
 * @return Um inteiro calculado como o dobro da contagem de elementos maiores que 2 e divisíveis por 5,
 *         mais a contagem de elementos de dois dígitos entre eles.
 * 
 * @note A função retorna um valor inteiro para garantir que a apresentação do `vetor` apareça sempre formatado 
 * 		 indepentemente do tamanho.
 */
int ft_maior_divisivel(int vetor[N])
{
	int num_maior_div = 0;
	int j = 0;
	int two_digits;
	int *vetor_valores;

	for(int i = 0; i < N; i++)
		if (vetor[i] > 2 && vetor[i] % 5 == 0)
			num_maior_div++;
	
	vetor_valores = (int *)malloc(num_maior_div * sizeof(int));

	if(!vetor_valores)
	{
		printf("Erro na alocação do vetor_valores!\n");
		return (0);
	}

	for(int i = 0; i < N; i++)
		if (vetor[i] > 2 && vetor[i] % 5 == 0)
			vetor_valores[j++] = vetor[i];
	
	two_digits = ft_check_digits(vetor_valores, num_maior_div);

	if(vetor_valores[0] != '\0')
		ft_printf_vetor(vetor_valores, num_maior_div, 0);
	else
		printf("                    Não existe");

	free(vetor_valores);

	if(!num_maior_div)
		return(30);
	else
		return ((num_maior_div*2) + two_digits);
}


/**
 *  Soma os elementos correspondentes das duas metades do vetor de entrada.
 *
 * Esta função recebe um vetor de inteiros e soma os elementos correspondentes
 * das suas duas metades. O resultado é armazenado em um vetor alocado dinamicamente.
 *
 * @param vetor O vetor de entrada de inteiros com tamanho N.
 * @return A quantidade de números de dois dígitos no vetor resultante.
 *
 * @note A função retorna um valor inteiro para garantir que a apresentação do `vetor` apareça sempre formatado 
 * 		 indepentemente do tamanho.
 */
int	ft_vetor_soma_metades(int vetor[N])
{
	int	i = -1;
	int	*vetor_metade;
	int i_metade = N/2;
	int two_digits;

	vetor_metade = (int *)malloc(sizeof(int) * (i_metade));
	if (!vetor_metade)
	{
		printf("Erro na alocação do vetor_metade!\n");
		return (0);
	}
	while (++i < i_metade)
		vetor_metade[i] = vetor[i] + vetor[i_metade + i];

	two_digits = ft_check_digits(vetor_metade, i_metade);

	ft_printf_vetor(vetor_metade, N / 2, 0);
	free(vetor_metade);

	return (two_digits);
}

/**
 *  Lê um `vetor` de tamanho `N`
 *
 * Esta função recebe uma `flag` para destinguir da leitura do `vetor inicial`  para 
 * o `novo vetor`. Após isso lê os valores e guarda esses elementos num `vetor` alocado dinamicamente
 *
 * @param flag Um valor inteiro (1 ou 0) 
 * @return Um ponteiro para o `vetor` lido
 *
 * @note A função retorna NULL caso a alocação corra mal.
 */
int *ft_ler_vetor(int flag)
{
	int *vetor = (int *)malloc(sizeof(int) * N);
	int i = -1;
	if(!vetor)
    {
        printf("Erro na alocação do vetor!\n");
		return (NULL);
    }
	ft_banner_vetor();
	if(flag)
		printf("[NOVO VETOR]\n");
	printf("Insira %d valores inteiros compreendidos entre 1 e 11 inclusive\n", N);
    while (++i < N)
    {
        printf(">> ");
        while(scanf("%d", &vetor[i]) <= 0 || (vetor[i] < 1 || vetor[i] > 11))
        {
            printf("Erro, insira novamente > ");
            ft_clean_input();
        }
    }

	return (vetor);
}

/**
 *  Soma os valores presentes em um `vetor` de `N` elementos
 *
 * A função precorre o `vetor` e somar todos os elementos, têm como propósito
 * auxiliar a função `ft_vetor_baralhado`.
 *
 * @param vetor Um `vetor` de tamnho `N` composto por 0's e 1's
 * @return `1` caso todos os valores presentes no `vetor` sejam `1's` | 
 * 		   `0` caso ainda exista `0's` no `vetor`
 *
 * @note Está função auxilia a verificar se todas as posições foram tomadas como 1.
 */
int ft_somar_vetor(int vetor[N])
{
	int i = -1;
	int somatorio = 0;
	while(++i < N)
		somatorio += vetor[i];
	if(somatorio == N)
		return (1);
	return (0);

}


/**
 *  Salva o conteúdo necessário em uma `matriz` para apresentar na tela.
 *
 * Esta função cria uma matriz e a preenche com o conteúdo de três vetores.
 * A matriz é alocada dinamicamente e deve ser liberada pelo chamador para evitar vazamentos de memória.
 *
 * @param vetor O `vetor` de entrada de tamanho N.
 * @param vetor_baralhado O `vetor baralhado` que reune metade do `vetor incial` e metade do `novo vetor`.
 * @param novo_vetor O `novo vetor` lido.
 * @param a Um valor inteiro que corresponde a metade usada do `vetor inicial`.
 * @param b Um valor inteiro que corresponde a metade usada do `novo vetor`.
 * @return Um ponteiro para a matriz alocada dinamicamente.
 *
 * @note Sendo que a informação que irá guardar é o `vetor inicial`,o `novo vetor`, o `vetor baralhado` 
 * 		 e as metades que foram usadas para a criação do `vetor baralhado` usando uma 
 * 		 metade do `vetor inicial` e do `novo vetor`.
 * 
 * @note O valor `a` e `b` correspondem a metade que foi usada de cada vetor respetivamente
 * 		 `0` se foi usada a `1º metade` e `8` se foi usada a `2º metade`
 */
int **ft_save_to_matriz(int vetor[N], int vetor_baralhado[N], int novo_vetor[N], int a, int b)
{
	int **matriz = (int **)malloc(6 * sizeof(int *));
	int flag = 1, flag2 = 0;
	int x = a, y = b;

	for (int i = 0; i < 4; i++)
	{
		matriz[i] = (int *)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++)
		{
			if (flag == 1)
				matriz[i][j] = vetor[j];
			else if (flag == 2)
				matriz[i][j] = vetor_baralhado[j];
			else if(flag == 3)
				matriz[i][j] = novo_vetor[j];
			else
			{
				if (!flag2)
				{
					matriz[i][j++] = a;
					matriz[i][j] = b;
					flag2++;
				}
				else
					matriz[i][j] = 0;
			}
		}
		flag++;
	}

	for (int i = 4; i < 6; i++)
	{
		matriz[i] = (int *)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++)
		{
			if (i == 5)
			{
				if (b == 0)
				{
					if (y < (N/2))
						matriz[i][j] = novo_vetor[y++];
					else
						matriz[i][j] = 0;
				}
				else
				{
					if (y < (N-1))
						matriz[i][j] = novo_vetor[++y];
					else
						matriz[i][j] = 0;
				}
			}
			else
			{
				if (a == ((N/2) - 1))
				{
					if (x < (N-1))
						matriz[i][j] = vetor[++x];
					else
						matriz[i][j] = 0;
				}
				else
				{
					if (x < (N/2))
						matriz[i][j] = vetor[x++];
					else
						matriz[i][j] = 0;
				}
			}
		}
	}

	return (matriz);
}

/**
 *
 * Esta função aloca memória para um novo vetor e preenche-o com a segunda metade
 * dos elementos do vetor de entrada de tamanho N.
 *
 * @param vetor O vetor de entrada.
 * @return Ponteiro para o novo vetor alocado contendo a segunda metade do vetor de entrada.
 *         Retorna NULL se a alocação de memória falhar ou se o vetor de entrada for NULL.
 */
int *ft_return_metade_vetor(int *vetor)
{
	int *metade_vetor = (int *)malloc(sizeof(int) * (N/2));
	int j = -1;
	if(!metade_vetor || !vetor)
		return NULL;
	for(int i = (N/2); i < N; i++)
		metade_vetor[++j] = vetor[i];
	
	return (metade_vetor);
}

/**
 *
 * Esta função itera pelo vetor fornecido e verifica se o valor especificado
 * está presente no vetor. Se o valor for encontrado, a função retorna 1. Caso contrário,
 * retorna 0.
 *
 * @param valor O valor a ser procurado no vetor.
 * @param vetor Um ponteiro para o vetor de inteiros.
 * @param size O tamanho do vetor.
 * @return Retorna 1 se o valor for encontrado no vetor, caso contrário retorna 0.
 */
int ft_in_vetor(int valor, int *vetor, int size)
{
	int i = -1;
	while (++i < size)
	{
		if(vetor[i] == valor)
			return (1);
	}
	return (0);
}

/**
 *
 * Esta função recebe dois arrays de inteiros, vetor_baralhado e vetor_tmp, e verifica se algum elemento
 * na primeira metade de vetor_baralhado existe em vetor_tmp. Utiliza uma função auxiliar 
 * ft_return_metade_vetor para obter a primeira metade de vetor_tmp e outra função auxiliar 
 * ft_in_vetor para verificar a presença dos elementos.
 *
 * @param vetor_baralhado Ponteiro para o vetor a ser verificado.
 * @param vetor_tmp Ponteiro para o vetor a ser comparado.
 * @return Retorna 1 se algum elemento na primeira metade de vetor_baralhado existir em vetor_tmp, caso contrário retorna 0.
 */
int ft_verificar_baralhado(int *vetor_baralhado, int *vetor_tmp)
{
	int i = -1;
	int *vetor_metade = ft_return_metade_vetor(vetor_tmp);
	while (++i < N / 2)
	{
		if(ft_in_vetor(vetor_baralhado[i], vetor_metade, N/2))
		{
			free(vetor_metade);
			return (1);
		}		
	}
	free(vetor_metade);
	return (0);
}

/**
 *  Cria um `vetor baralhado` usando o `vetor inicial` e um `novo vetor` lido posteriormente
 *
 * Esta função vai usar aleatoriamente uma das metades de cada vetor(`vetor inicial` e `novo vetor`) e organiza "baralhando" num
 * novo vetor. Ele vai guardar várias informações necessárias para a apresentação do resultado numa matriz
 *
 * @param vetor O `vetor` de entrada de tamanho N.
 * @return Um ponteiro para a matriz alocada dinamicamente.
 */
int **ft_vetor_baralhado(int vetor[N])
{
	int *novo_vetor = ft_ler_vetor(1);
	int *check_index = (int *)malloc(N * sizeof(int));
	int vetor_tmp[N] = {};
	int *vetor_baralhado = (int *)malloc(N * sizeof(int));
	int i, j, save_i, save_j, k = -1;

	if(!vetor_baralhado || !check_index)
    {
        printf("Erro na alocação!\n");
		return (NULL);
    }

	srand(time(NULL));
	memset(check_index, 0, N * sizeof(int));

	i = (rand() % 2) * ((N/2) - 1);
	j = (rand() % 2) * ((N/2) - 1);
	save_i = i;
	save_j = j;

	if((i < (N/2) - 1))
		while(i <= ((N/2) - 1))
			vetor_tmp[++k] = vetor[i++];
	else
		while(i < (N-1))
			vetor_tmp[++k] = vetor[++i];
	k++;
	if(j < ((N/2) - 1))
		while(j <= ((N/2) - 1))
			vetor_tmp[k++] = novo_vetor[j++];
	else
		while(j < (N-1))	
			vetor_tmp[k++] = novo_vetor[++j];

	i = 0;
	
	do
	{
		while(!ft_somar_vetor(check_index))
		{
			j = rand() % N;
			if(!check_index[j])
			{
				check_index[j] = 1;
				vetor_baralhado[i++] = vetor_tmp[j];
			}
		}
		memset(check_index, 0, N * sizeof(int));
	} while (!ft_verificar_baralhado(vetor_baralhado, vetor_tmp));
	
	int **matriz_tudo = ft_save_to_matriz(vetor, vetor_baralhado, novo_vetor, save_i, save_j);

	free(novo_vetor);
	free(vetor_baralhado);
	free(check_index);

	if(!matriz_tudo)
		return (NULL);
	return (matriz_tudo);
}

/**
 *  Verifica a quantidade de números ímpares em um `vetor`.
 *
 * Esta função percorre um `vetor de inteiros` e conta quantos deles são ímpares.
 *
 * @param vetor Um vetor de inteiros de tamanho `N`.
 * @return A quantidade de números `ímpares` no vetor.
 */
int ft_check_impar(int vetor[N])
{
	int i = -1;
	int impar = 0;
	while (++i < N)
		if (vetor[i] % 2 != 0)
			impar++;
	return (impar);
}

/**
 *  Decompõe um vetor de inteiros em seus fatores primos.
 *
 * Esta função recebe um vetor de inteiros e decompõe cada número ímpar
 * em seus fatores primos. O resultado é armazenado em uma matriz alocada
 * dinamicamente. Cada linha da matriz corresponde à fatorização prima
 * de um número ímpar do vetor de entrada. A última linha da matriz contém
 * todos os números ímpares do vetor de entrada.
 *
 * @param vetor Um vetor de inteiros a ser decomposto.
 * @return Um ponteiro para uma matriz alocada dinamicamente contendo as
 *         fatorações primas dos números ímpares do vetor de entrada. A última
 *         linha contém todos os números ímpares do vetor de entrada. Retorna `NULL`
 *         se a alocação de memória falhar.
 */
int **ft_decompor(int vetor[N])
{
    int k = -1;
    int fator = 2;
    int num;
    int **decomposto;
    int impar = ft_check_impar(vetor);

    decomposto = (int **)malloc((impar + 1) * sizeof(int *));
    if (!decomposto)
        return (NULL);

    decomposto[impar] = (int *)malloc(N * sizeof(int));
    int impar_index = 0;

    for (int i = 0; i < N; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            decomposto[impar][impar_index++] = vetor[i];

            decomposto[++k] = (int *)malloc(N * sizeof(int));
            decomposto[k][0] = vetor[i];
            decomposto[k][1] = 1;
            num = vetor[i];
            int j = 2;

            while (num != 1)
            {
                while (num % fator != 0)
                    fator++;
                decomposto[k][j++] = fator;
                num /= fator;
                fator = 2;
            }

            while (j < N)
                decomposto[k][j++] = 0;
        }
    }

    while (impar_index < N)
        decomposto[impar][impar_index++] = 0;

    return (decomposto);
}



/**
 *  Multiplica dois vetores para formar uma matriz.
 *
 * Esta função recebe `dois vetores` de tamanho `N` e os multiplica para formar uma `matriz`.
 * O `primeiro vetor` é tratado como uma matriz `1xN` e o `segundo vetor` é tratado como uma matriz `Nx1`.
 * A matriz resultante é uma matriz `NxN` onde cada elemento é o produto dos elementos correspondentes
 * dos dois vetores de entrada.
 *
 * @param vetor O `primeiro vetor` de entrada de tamanho `N`.
 * @param vetor2 O `segundo vetor` de entrada de tamanho `N`.
 * @return Um ponteiro para a matriz NxN resultante. Retorna `NULL` se a alocação de memória falhar.
 */
int **ft_multiplicar_matriz(int vetor[N], int vetor2[N])
{
	int matriz[1][N] = {};
	int matriz2[N][1] = {};
	int **matriz_final = (int **)malloc(N * sizeof(int *));

	if(!matriz_final)
    {
        printf("Erro na alocação das linhas da matriz_final!\n");
		return (NULL);
    }
	for(int i = 0; i < N ; i++)
    {
        matriz_final[i] = (int *)malloc(N * sizeof(int));
        if(!matriz_final[i])
        {
            printf("Erro na alocação das colunas da matriz_final!\n");
            return (NULL);
        }
    }

	for(int i = 0; i < N; i++)
		matriz[0][i] = vetor[i];

	for(int j = 0; j < N; j++)
		matriz2[j][0] = vetor2[j];

	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			matriz_final[j][i] = matriz[0][j] * matriz2[i][0];

	return matriz_final;
}


/**
 *  Transpõe uma `matriz quadrada` fornecida.
 *
 * Esta função recebe uma `matriz quadrada` `(NxN)` como entrada e retorna sua transposta.
 * A transposta de uma matriz é obtida trocando linhas por colunas.
 *
 * @param matriz A `matriz quadrada` de entrada a ser transposta.
 * @return Uma nova matriz que é a transposta da matriz de entrada.
 *
 * @note O chamador é responsável por liberar a memória alocada para a matriz transposta.
 */
int **ft_transposta(int **matriz)
{
    int **matriz_transposta = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        matriz_transposta[i] = (int *)malloc(N * sizeof(int));
		for (int j = 0; j < N; j++)
            matriz_transposta[i][j] = matriz[j][i];
    }

    return (matriz_transposta); 
}

/**
 *  Exibe o menu de ajuda do programa.
 *
 * Esta função limpa a tela e imprime um menu de ajuda detalhado, que inclui:
 * - Uma visão geral do programa e suas funcionalidades.
 * - Dicas de utilização para evitar erros comuns.
 * - Instruções para execução via linha de comandos.
 * - Descrição das funções básicas e adicionais disponíveis no programa.
 *
 * Funções Básicas:
 * - [01] Construção de uma matriz 4x18.
 * - [02] Cálculo do logaritmo natural.
 * - [03] Cálculo da mediana.
 * - [04] Ordenação de valores simétricos.
 * - [05] Filtros específicos.
 * - [06] Soma das metades do vetor.
 *
 * Funções Adicionais:
 * - [07] Página de ajuda.
 * - [08] Mistura de vetores.
 * - [09] Decomposição em números primos.
 * - [10] Produto de matrizes.
 * - [11] Cálculo da matriz transposta.
 * - [12] Sair do Programa.
 *
 * O menu de ajuda é exibido em um formato visualmente agradável, utilizando
 * caracteres especiais para criar bordas e seções.
 */
void ft_ajuda(void)
{
	ft_clear_screen();
	printf("╔═══════════════════════════════════════════════════════════════════╗\n");
    printf("╠════════════════════════════  AJUDA  ══════════════════════════════╣\n");
    printf("║   Este programa foi desenvolvido para manipular um vetor          ║\n");
	printf("║   de 18 números inteiros, fornecidos pelo utilizador. Os números  ║\n");
	printf("║   devem estar no intervalo entre 1 e 11. Com base nesse vetor     ║\n");
	printf("║   o programa oferece várias operações e cálculos que podem        ║\n");
	printf("║   ser realizados, fornecendo resultados diretamente no ecrã.      ║\n");
	printf("║                                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("╠═════════════════════════  DICAS DE UTILIZAÇÃO  ═══════════════════╣\n");
	printf("║   1. Digite o número da opção desejada e pressione 'Enter'        ║\n");
    printf("║   2. Certifique-se de que os valores fornecidos estão no          ║\n");
	printf("║      intervalo de 1 a 11 para evitar erros de validação           ║\n");
    printf("║   3. Se uma opção inválida for escolhida, o programa solicitará   ║\n");
	printf("║      a escolha de uma nova opção.                                 ║\n");
	printf("║   4. Para informações detalhadas sobre cada funcionalidade,       ║\n");
	printf("║      utilize a opção [07] Página de ajuda.                        ║\n");
	printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("╠══════════════════  EXECUÇÃO VIA LINHA DE COMANDOS  ═══════════════╣\n");
	printf("║   O programa também pode ser executado via linha de comandos.     ║\n");
	printf("║   Para exibir a ajuda diretamente, use o comando:                 ║\n");
	printf("║                                                                   ║\n");
	printf("║      ./lp-team-15  --help                                         ║\n");
	printf("║                                                                   ║\n");
	printf("║   Isso exibirá este menu de ajuda, oferecendo uma visão geral     ║\n");
	printf("║   sobre as funcionalidades e como utilizá-las.                    ║\n");
  	printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("╠════════════════════════  FUNÇÕES BÁSICAS  ════════════════════════╣\n");
    printf("║  [01] Construção de uma matriz 4x18                               ║\n");
	printf("║  - Criação de uma matriz onde cada linha é composta pelos 18      ║\n");
    printf("║    valores fornecidos pelo utilizador.                            ║\n");
	printf("║                                                                   ║\n");
    printf("║  [02] Cálculo do logaritmo natural                                ║\n");
    printf("║   - Cálculo do logaritmo (base 'e') de cada elemento do vetor     ║\n");
	printf("║                                                                   ║\n");
	printf("║  [03] Cálculo da mediana                                          ║\n");
    printf("║   - Determinação da mediana dos 18 elementos fornecidos           ║\n");
	printf("║                                                                   ║\n");
	printf("║  [04] Ordenação de valores simétricos                             ║\n");
    printf("║   - Devolução de um vetor com os valores simétricos ordenados     ║\n");
	printf("║     em ordem crescente                                            ║\n");
	printf("║                                                                   ║\n");
	printf("║  [05] Filtros específicos                                         ║\n");
    printf("║   - Listagem dos valores que são maiores que dois e               ║\n");
	printf("║     divisíveis por cinco                                          ║\n");
	printf("║                                                                   ║\n");
	printf("║  [06] Soma das metades do vetor                                   ║\n");
    printf("║   - Cálculo da soma dos elementos da primeira metade do vetor     ║\n");
	printf("║     com os da segunda metade, devolvendo um vetor com metade      ║\n");
	printf("║     do tamanho original                                           ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("╠══════════════════════  FUNÇÕES ADICIONAIS  ═══════════════════════╣\n");
	printf("║  [07] Página de ajuda                                             ║\n");
    printf("║   - Exibe um menu de ajuda. Utilize `--help` para exibir o        ║\n");
	printf("║     menu de ajuda, que contém informações sobre as                ║\n");
	printf("║     funcionalidades disponíveis e como utilizar o programa        ║\n");
	printf("║                                                                   ║\n");
	printf("║  [08] Mistura de vetores                                          ║\n");
    printf("║   - Leitura de um novo vetor e devolução de um vetor misturado    ║\n");
	printf("║     (metade do primeiro vetor com metade do segundo)              ║\n");
	printf("║                                                                   ║\n");
	printf("║  [09] Decomposição em números primos                              ║\n");
    printf("║   - Análise dos números ímpares do vetor inicial, decompondo-os   ║\n");
	printf("║     em números primos                                             ║\n");
	printf("║                                                                   ║\n");
	printf("║  [10] Produto de matrizes                                         ║\n");
    printf("║   - Criação de uma matriz 18x18 resultante do produto do vetor    ║\n");
	printf("║     inicial ordenado por ordem crescente                          ║\n");
	printf("║                                                                   ║\n");
	printf("║  [11] Cálculo da matriz transposta                                ║\n");
    printf("║   - Cálculo da matriz transposta da matriz 18x18 e                ║\n");
	printf("║     exibição do resultado                                         ║\n");
	printf("║                                                                   ║\n");
	printf("║  [12] Sair do Programa                                            ║\n");
    printf("║   - Encerra o programa. Use esta opção quando finalizar todas     ║\n");
	printf("║     as operações desejadas.                                       ║\n");
	printf("╚═══════════════════════════════════════════════════════════════════╝\n");  
}

/**
 *  Exibe a ajuda básica do programa.
 *
 * Esta função imprime instruções detalhadas sobre como executar o programa,
 * navegar pelo menu, fornecer entrada de dados, dicas úteis e como encerrar
 * o programa. As instruções são exibidas em um formato de caixa ASCII para
 * facilitar a leitura e a compreensão.
 */
void ft_ajuda_cmd(void)
{
    printf("╔═══════════════════════════════════════════════════════════════════╗\n");
    printf("╠═══════════════════════  AJUDA BÁSICA  ════════════════════════════╣\n");
    printf("║  [COMO EXECUTAR O PROGRAMA]                                       ║\n");
    printf("║  1. Execute o programa digitando após compilar (make):            ║\n");
    printf("║     $ ./lp-team-15                                                ║\n");
    printf("║  2. O menu principal será exibido com as opções disponíveis.      ║\n");
    printf("║     Digite o número correspondente à operação que deseja realizar.║\n");
    printf("║                                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("║  [NAVEGANDO PELO MENU]                                            ║\n");
    printf("║  - Use os números no menu para escolher uma opção específica.     ║\n");
    printf("║  - Ao inserir uma escolha inválida, o programa solicitará uma     ║\n");
    printf("║    nova entrada até que uma opção válida seja selecionada.        ║\n");
    printf("║  - Para sair do programa, escolha a opção de saída no menu.       ║\n");
    printf("║                                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("║  [ENTRADA DE DADOS]                                               ║\n");
    printf("║  - Quando solicitado, forneça um vetor de 18 números inteiros.    ║\n");
    printf("║  - Os números devem estar no intervalo entre 1 e 11.              ║\n");
    printf("║  - Certifique-se de seguir as instruções específicas de entrada   ║\n");
    printf("║    para cada função do menu.                                      ║\n");
    printf("║                                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("║  [DICAS ÚTEIS]                                                    ║\n");
    printf("║  - Utilize a opção de ajuda do menu principal para entender cada  ║\n");
    printf("║    função detalhadamente.                                         ║\n");
    printf("║  - Certifique-se de digitar números inteiros válidos quando o     ║\n");
    printf("║    programa solicitar.                                            ║\n");
    printf("║  - Revise as mensagens exibidas pelo programa para qualquer       ║\n");
    printf("║    informação adicional ou erro.                                  ║\n");
    printf("║  - Para reiniciar o programa, saia e execute novamente.           ║\n");
    printf("║                                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════╣\n");
    printf("║  [ENCERRANDO O PROGRAMA]                                          ║\n");
    printf("║  - Para finalizar a execução do programa, escolha a opção de sair ║\n");
    printf("║    no menu principal ou pressione `Ctrl + C` no terminal.         ║\n");
    printf("║  - O programa limpará todos os dados em memória e será encerrado  ║\n");
    printf("║    de forma segura.                                               ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════╝\n");
}

/**
 *  Libera a memória alocada para uma matriz.
 *
 * Esta função recebe um ponteiro para uma matriz e o número de linhas,
 * e libera a memória alocada para cada linha e depois a memória alocada
 * para a matriz em si.
 *
 * @param matriz Ponteiro para a matriz a ser liberada.
 * @param linhas Número de linhas na matriz.
 */
void ft_free_matriz(int **matriz, int linhas)
{
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
}

/**
 *  Imprime os elementos de um vetor de inteiros.
 *
 * Esta função imprime os elementos do vetor de inteiros `vetor` a partir do
 * índice inicial `i` até, mas não incluindo, o tamanho especificado `size`. Cada
 * elemento é impresso seguido por um espaço.
 *
 * @param vetor Ponteiro para o vetor de inteiros a ser impresso.
 * @param size O número de elementos no vetor.
 * @param i O índice inicial a partir do qual começar a impressão.
 */
void	ft_printf_vetor(int *vetor, int size, int i)
{
	while (i < size)
		printf("%d ", vetor[i++]);
}

/**
 *  Imprime uma matriz.
 *
 * Esta função imprime uma matriz com um número especificado de linhas.
 * Cada elemento na matriz é impresso seguido por um espaço, e cada linha
 * é impressa em uma nova linha.
 *
 * @param matriz Um ponteiro para a matriz a ser impressa.
 * @param linhas O número de linhas na matriz.
 */
void ft_print_matriz(int **matriz, int linhas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

/**
 *  Limpa o buffer de entrada lendo e descartando caracteres até encontrar uma nova linha.
 *
 * Esta função é útil para remover quaisquer caracteres extras do buffer de entrada,
 * especialmente após a leitura de entrada para evitar comportamentos indesejados em operações de entrada subsequentes.
 */
void	ft_clean_input(void)
{
	while (getchar() != '\n')
		;
}

/**
 *  Executa uma opção do menu com base na escolha do usuário.
 *
 * Esta função limpa a tela, executa a função correspondente
 * com base na escolha da opção do menu do usuário, limpa a entrada e espera
 * o usuário pressionar enter.
 *
 * @param opcao A opção do menu escolhida pelo usuário.
 * @param vetor Um vetor de inteiros a ser passado para as funções de opção.
 * @param flag  Um inteiro para verificar se a opção 10 foi usada ou não (1 se foi, 0 se não foi)
 */
void ft_exec_menu(int opcao, int vetor[N], int *flag)
{
	ft_clear_screen();
	switch (opcao)
	{
	case 1:
		ft_option_one(vetor);
		break;
	case 2:
		ft_option_two(vetor);
		break;
	case 3:
		ft_option_three(vetor);
		break;
	case 4:
		ft_option_four(vetor);
		break;
	case 5:
		ft_option_five(vetor);
		break;
	case 6:
		ft_option_six(vetor);
		break;
	case 7:
		ft_ajuda();
		break;
	case 8:
		ft_option_eight(vetor);
		break;
	case 9:
		ft_option_nine(vetor);
		break;
	case 10:
		ft_option_ten(vetor, flag);
		break;
	case 11:
		ft_option_eleven(vetor, flag);
		break;
	default:
		break;
	}
	ft_clean_input();
	ft_wait_enter();
}

/**
 *  Aguarda o usuário pressionar a tecla `ENTER` para prosseguir.
 * 
 * Esta função solicita ao usuário que pressione a tecla `ENTER` para continuar. 
 * Ela lê a entrada do padrão de entrada e verifica se a tecla `ENTER` foi pressionada. 
 * Se a tecla `ENTER` for pressionada, ela limpa a tela e permite que o programa prossiga. 
 * Se qualquer outra tecla for pressionada, ela continua solicitando ao usuário até que a tecla `ENTER` seja pressionada.
 */
void ft_wait_enter(void) 
{
    char av[5] = {};
    int enter = 0;
    
    do {
        printf("\nPressione a tecla ENTER para avançar");
        fgets(av, sizeof(av), stdin);
        
        if (strchr(av, '\n') != NULL) 
		{
            if (strcmp(av, "\n") == 0) 
			{
                enter = 1; 
                ft_clear_screen();
            } 
        } 
		else 
            while (getchar() != '\n');
        
    } while (enter == 0);
}

/**
 *  Limpa a tela do terminal.
 *
 * Esta função usa a chamada do sistema para executar o comando `clear`,
 * que limpa a tela do terminal.
 */
void ft_clear_screen(void)
{
	system("clear");
}

/**
 *
 * Esta função calcula o número de dígitos no inteiro fornecido `num`
 * dividindo repetidamente o número por 10 até que seja menor que 10.
 *
 * @param num O inteiro cujo número de dígitos deve ser calculado.
 * @return O número de dígitos no inteiro fornecido.
 */
int ft_check_number_size(int num)
{
	int zeros = 0;

    while (num >= 10)
    {
        if(num / 10 != 0)
        {
            zeros++;
            num /= 10;
        }
    }
    return (zeros);
}

/**
 *
 * Esta função itera através do vetor fornecido e verifica o número de dígitos
 * em cada elemento que é maior ou igual a 10. Utiliza a função auxiliar
 * `ft_check_number_size` para determinar o número de dígitos em cada elemento e 
 * soma-os.
 *
 * @param vetor O array de inteiros a ser verificado.
 * @param size O tamanho do array.
 * @return O número total de dígitos nos elementos do array que são maiores ou iguais a 10.
 */
int ft_check_digits(int vetor[N], int size)
{
	
	int chars = 0;
	for(int i = 0; i < size; i++)
	{	
		if(vetor[i] >= 10)
			chars += ft_check_number_size(vetor[i]);
	}
	return (chars);
}

/**
 *  Imprime um número especificado de espaços.
 *
 * Esta função recebe um parâmetro inteiro e imprime essa quantidade de espaços
 * na saída padrão.
 *
 * @param spaces O número de espaços a imprimir.
 */
void ft_spaces(int spaces)
{
	while (spaces)
	{
		printf(" ");
		spaces--;
	}
}

/**
 *
 * Esta função recebe um vetor de inteiros (vetor) de tamanho N, constrói uma matriz 4x18 a partir dele,
 * e exibe tanto o vetor quanto a matriz de forma formatada no terminal.
 *
 * @param vetor O vetor de inteiros (vetor) de tamanho N a ser exibido e usado para construir a matriz.
 *
 */
void ft_option_one(int vetor[N])
{
	int spaces = 55 - (((N * 2) + 1) + ft_check_digits(vetor, N)); // Fazer a formula geral para qualquer valor
	int **matriz = ft_matriz_vetor(vetor);

	if(!matriz)
		return;
	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                 CONSTRUÇÃO MATRIZ 4X%d                 ║\n", N);
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║  ↓ MATRIZ ORIGINARIA DO VETOR ↓                        ║\n");
	printf("║                                                        ║\n");
	for(int i = 0; i < 4; i++)
	{
		printf("║ ");
		for(int j = 0; j < N; j++)
			printf("%d ", matriz[i][j]);
		ft_spaces(spaces);
		printf(" ║\n");
	}
	printf("╚════════════════════════════════════════════════════════╝\n");

	ft_free_matriz(matriz, 4);
}

/**
 *
 * Esta função imprime uma tabela formatada que inclui o vetor inicial
 * e os logaritmos dos seus elementos.
 * 
 * @param vetor Um vetor de inteiros cujos logaritmos serão calculados e exibidos.
 */
void ft_option_two(int vetor[N])
{

	int spaces = 55 - (37 + ft_check_digits(vetor, N));

	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                  CALCULAR LOGORITMOS                   ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║               ELEMENTOS    ║    LOGORITMO              ║\n");
	
	for(int i = 0; i < N; i++)
	{	
		
		if(vetor[i] < 10)
			printf("║                   %d        ║       %.2f                ║\n", vetor[i], log(vetor[i]));
		else
			printf("║                   %d       ║       %.2f                ║\n", vetor[i], log(vetor[i]));

	}
	printf("╚════════════════════════════════════════════════════════╝\n");
}

/**
 *
 * Esta função recebe um vetor de inteiros como entrada, ordena-o em ordem crescente e, em seguida,
 * exibe o vetor inicial, o vetor ordenado, os valores centrais do vetor ordenado e a mediana
 * do vetor inicial.
 *
 * @param vetor O vetor de inteiros de entrada.
 */
void ft_option_three(int vetor[N])
{
	int spaces = 55 - (37 + ft_check_digits(vetor, N));
	int *vetor_ordenado = ft_vetor_ordenado_crescente(vetor,0);

	if(!vetor_ordenado)
		return;
	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║               CALCULAR MEDIANA DO VETOR                ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR ORDENADO ↓                                    ║\n");
	printf("║ ");
	ft_printf_vetor(vetor_ordenado, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	if(vetor_ordenado[N/2] < 10 && vetor_ordenado[(N/2)-1] < 10)
		printf("║   VALORES CENTRAIS: (%d e %d)                            ║\n", vetor_ordenado[(N/2)-1],vetor_ordenado[N/2]);
	else if(vetor_ordenado[N/2] >= 10 && vetor_ordenado[(N/2)-1] >= 10)
		printf("║   VALORES CENTRAIS: (%d e %d)                          ║\n", vetor_ordenado[(N/2)-1],vetor_ordenado[N/2]);
	else if(vetor_ordenado[N/2] >= 10 || vetor_ordenado[(N/2)-1] >= 10)
		printf("║   VALORES CENTRAIS: (%d e %d)                           ║\n", vetor_ordenado[(N/2)-1],vetor_ordenado[N/2]);	
	printf("║                                                        ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	if(ft_mediana(vetor) >= 10)
		printf("║   MEDIANA→ %.2f                                       ║\n", ft_mediana(vetor));
	else
		printf("║   MEDIANA→ %.2f                                        ║\n", ft_mediana(vetor));
	printf("╚════════════════════════════════════════════════════════╝\n");

	free(vetor_ordenado);

}

/**
 * 
 * Esta função recebe um vetor de inteiros `vetor` de tamanho `N`, ordena-o simetricamente,
 * e depois imprime tanto o vetor original quanto o vetor simetricamente ordenado.
 *
 * @param vetor O vetor de inteiros a ser simetricamente ordenado e exibido.
 */
void ft_option_four(int vetor[N])
{
	int spaces;
	int *vetor_simetrico = ft_vetor_ordenado_crescente(vetor,1);

	if(!vetor_simetrico)
		return;
	ft_clear_screen();
	printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                     ORDENAÇÃO SIMÉTRICA DOS VALORES                      ║\n");
	printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
	printf("║                                                                          ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                                        ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	spaces = 73 - (37 + ft_check_digits(vetor, N));
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
	printf("║                                                                          ║\n");
	printf("║  ↓ VETOR SIMÉTRICO ORDENADO ↓                                            ║\n");
	printf("║ ");
	ft_printf_vetor(vetor_simetrico, N, 0);
	spaces = 73 - (55 + ft_check_digits(vetor, N));
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
	free(vetor_simetrico);

}

/**
 *
 * Esta função imprime uma tabela formatada mostrando o vetor inicial
 * e os valores do vetor que são maiores que 2 e divisíveis por 5.
 *
 * @param vetor O vetor de inteiros a ser processado.
 */
void ft_option_five(int vetor[N])
{
	int spaces = 55 - (37 + ft_check_digits(vetor, N));

	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║       VALORES MAIORES QUE 2 E DIVISIVEIS POR 5         ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║ ↓ VALORES MAIORES QUE 2 E DIVISIVEIS POR 5 ↓           ║\n");
	printf("║ ");
	spaces = 54 - (ft_maior_divisivel(vetor)); 
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");

}

/**
 *
 * Esta função imprime uma exibição formatada do vetor inicial
 * e do vetor obtido pela soma da primeira e segunda metades do vetor inicial.
 *
 * @param vetor O vetor de entrada de inteiros.
 */
void ft_option_six(int vetor[N])
{
	int spaces = 55 - (37 + ft_check_digits(vetor, N));

	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║       VETOR PRIMEIRA METADE + SEGUNDA METADE           ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║ ↓ VETOR ORIGINADO↓                                     ║\n");
	printf("║ ");
	spaces = 55 - (19 + ft_vetor_soma_metades(vetor));
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");
}

/**
 *
 * Esta função recebe um vetor de inteiros como entrada e pega numa das metades
 * de cada vetor e baralha aleatóriamente gerando um vetor baralhado que posteriormente
 * será apresentado no ecrã
 *
 * @param vetor O vetor de inteiros de tamanho N.
 */
void ft_option_eight(int vetor[N])
{
	int spaces = 55 - (37 + ft_check_digits(vetor, N));
	int **vetores = ft_vetor_baralhado(vetor);

	if(!vetores)
		return;
	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                   VETOR BARALHADO                      ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetores[0], N, 0);
	ft_spaces(spaces);
	printf(" ║\n");

	printf("║                                                        ║\n");
	printf("║  ↓ NOVO VETOR LIDO ↓                                   ║\n");
	printf("║ ");
	ft_printf_vetor(vetores[2], N, 0);
	spaces = 55 - (37 + ft_check_digits(vetores[2], N));
	ft_spaces(spaces);
	printf(" ║\n");

	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ METADE USADA DO VETOR INICIAL ↓                     ║\n");
	printf("║ ");
	ft_printf_vetor(vetores[4], 9, 0);
	spaces = 55 - (19 + ft_check_digits(vetores[4], N / 2));
	ft_spaces(spaces);
	printf(" ║\n");

	printf("║                                                        ║\n");
	printf("║  ↓ METADE USADA DO VETOR INSERIDO ↓                    ║\n");
	printf("║ ");
	ft_printf_vetor(vetores[5], 9, 0);
	spaces = 55 - (19 + ft_check_digits(vetores[5], N / 2));
	ft_spaces(spaces);
	printf(" ║\n");

	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR BARALHADO ↓                                   ║\n");
	printf("║ ");
	ft_printf_vetor(vetores[1], N, 0);
	spaces = 55 - (37 + ft_check_digits(vetores[1], N));
	ft_spaces(spaces);
	printf(" ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");

	ft_free_matriz(vetores, 6);

}

/**
 *
 * Esta função recebe um vetor de inteiros, decompõe os números ímpares,
 * e imprime o vetor inicial, os valores ímpares do vetor e seus valores
 * decompostos.
 *
 * @param vetor O vetor de entrada de inteiros.
 *
 * A função realiza os seguintes passos:
 * 1. Decompõe o vetor nos seus valores ímpares.
 * 2. Verifica a quantidade de valores ímpares no vetor.
 * 3. Limpa a tela.
 * 4. Imprime o vetor inicial.
 * 5. Imprime os valores ímpares do vetor.
 * 6. Imprime os valores decompostos dos números ímpares.
 * 7. Liberta a memória alocada para os valores decompostos.
 *
 */
void ft_option_nine(int vetor[N])
{
	int **valores = ft_decompor(vetor);
	int impares = ft_check_impar(vetor);

	int spaces = 55 - (37 + ft_check_digits(vetor, N));

	if(!valores)
		return;
	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║               NÚMEROS IMPARES DECOMPOSTOS              ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VALORES IMPARES DO VETOR ↓                          ║\n");
	printf("║ "); 
	ft_printf_vetor(valores[impares], impares, 0);
	spaces = 53 - (((impares * 2) - 1) + ft_check_digits(valores[impares], impares));
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VALORES DECOMPOSTOS ↓                               ║\n");
	for(int i = 0; i < impares; i++)
	{
		printf("║ ");
		if(valores[i][0] > 10)
			printf("%d = 1", valores[i][0]);
		else
			printf("0%d = 1", valores[i][0]);
		int j = 2;
		while (valores[i][j] != 0)
			printf(" x %d", valores[i][j++]);
		if(j == 3)
		{	
			if(!ft_check_digits(valores[i], N))
				spaces = 55 - (10 + (ft_check_digits(valores[i], N)) + 1);
			else
				spaces = 55 - (10 + (ft_check_digits(valores[i], N)));
		}
		else if (j == 2)
			spaces = 55 - 7;
		else
			spaces = 55 - (15 + (ft_check_digits(valores[i], N)));
		
		ft_spaces(spaces);
		printf(" ║\n");
		printf("║                                                        ║\n");
	}
	printf("╚════════════════════════════════════════════════════════╝\n");
	ft_free_matriz(valores, impares+1);
}

/**
 * @brief Exibe o vetor inicial, o vetor ordenado e a matriz resultante da multiplicação desses vetores.
 *
 * Esta função realiza os seguintes passos:
 * 1. Ordena o vetor de entrada em ordem crescente.
 * 2. Multiplica o vetor original com o vetor ordenado para criar uma matriz.
 * 3. Limpa a tela e imprime o vetor inicial, o vetor ordenado e a matriz resultante.
 *
 * @param vetor O vetor de entrada de inteiros com tamanho N.
 * @param flag Um inteiro para mudar o valor quando esta função é usada
 */
void ft_option_ten(int vetor[N], int *flag)
{
	int *vetor_ordenado = ft_vetor_ordenado_crescente(vetor, 0);
	if (!vetor_ordenado)
		return;

	int **matriz = ft_multiplicar_matriz(vetor, vetor_ordenado);
	if (!matriz)
		return;

	int spaces = 108 - (37 + ft_check_digits(vetor, N));

	ft_clear_screen();
	*flag = 1; 

	printf("╔═════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║                                            MATRIZ %dx%d                                                     ║\n", N,N);
	printf("╠═════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
	printf("║                                                                                                             ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                                                                           ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                                                                             ║\n");
	printf("║  ↓ VETOR ORDENADO ↓                                                                                         ║\n");
	printf("║ ");
	ft_printf_vetor(vetor_ordenado, N, 0);
	ft_spaces(spaces);
	printf(" ║\n");
	printf("║                                                                                                             ║\n");
	printf("║  ↓ MATRIZ ORIGINARIA DOS VETORES ↓                                                                          ║\n");
	printf("║                                                                                                             ║\n");
	for (int i = 0; i < N; i++)
	{
		printf("║ ");
		for (int j = 0; j < N; j++)
			printf("%3d ", matriz[i][j]); 
		ft_spaces(35);
		printf(" ║\n");
	}
	printf("║                                                                                                             ║\n");
	printf("╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

	ft_free_matriz(matriz, N);
	free(vetor_ordenado);
}


/**
 *
 * Esta função recebe um vetor de inteiros, recria a matriz NxN, calcula a transposta
 * da matriz e, em seguida, exibe tanto a matriz original quanto sua transposta.
 *
 * @param vetor O vetor de entrada de inteiros de tamanho N.
 *
 */
void ft_option_eleven(int vetor[N], int *flag)
{
	if(!(*flag))
	{
		printf("Matriz não existe por favor use primeiro a opção 10\n");
		return;
	}
	int *vetor_ordenado = ft_vetor_ordenado_crescente(vetor, 0);
	if (!vetor_ordenado)
		return;

	int **matriz = ft_multiplicar_matriz(vetor, vetor_ordenado);
	if (!matriz)
		return;
	int **transposta = ft_transposta(matriz);

	int spaces = 108 - (37 + ft_check_digits(vetor, N));

	ft_clear_screen();
	printf("╔═════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
	printf("║                                          MATRIZ TRANSPOSTA                                                  ║\n");
	printf("╠═════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
	printf("║                                                                                                             ║\n");
	printf("║  ↓ MATRIZ ↓                                                                                                 ║\n");
	printf("║                                                                                                             ║\n");
	for (int i = 0; i < N; i++)
	{
		printf("║ ");
		for (int j = 0; j < N; j++)
			printf("%3d ", matriz[i][j]); 
		ft_spaces(35);
		printf(" ║\n");
	}
	printf("║                                                                                                             ║\n");
	printf("║                                                                                                             ║\n");
	printf("║  ↓ MATRIZ TRANSPOSTA ↓                                                                                      ║\n");
	printf("║                                                                                                             ║\n");
	for (int i = 0; i < N; i++)
	{
		printf("║ ");
		for (int j = 0; j < N; j++)
			printf("%3d ", transposta[i][j]); 
		ft_spaces(35);
		printf(" ║\n");
	}
	printf("║                                                                                                             ║\n");
	printf("╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");

	ft_free_matriz(matriz, N);
	ft_free_matriz(transposta, N);
	free(vetor_ordenado);
}