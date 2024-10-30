#include "functions-team-15.h"

int ft_menu()
{
    int op;
    printf("╔═════════════════════════════════════════════════════════╗\n");
    printf("╠════════════════════════  MENU  ═════════════════════════╣\n");
    printf("║- [01] Construir uma matriz 4x18 a partir do vetor       ║\n");
    printf("║- [02] Calcular o logoritmo de cada elemento do vetor    ║\n");
    printf("║- [03] Calcular a mediana do vetor                       ║\n");
    printf("║- [04] Ordenar os valores simétricos na ordem crescente  ║\n");
    printf("║- [05] Mostrar os valores > 2 e divisiveis por 5         ║\n");
    printf("║- [06] Soma da 1º metade do vetor com a 2º metade        ║\n");
    printf("╠═════════════════════════════════════════════════════════╣\n");
    printf("╠═════════════════  FUNÇÕES ADICIONAIS  ══════════════════╣\n");
    printf("║- [07] Mostrar menu de ajuda                             ║\n");
    printf("║- [08] Devolução vetor baralhado                         ║\n");
    printf("║- [09] Decompor os números impares                       ║\n");
    printf("║- [10] Devolução de uma matriz 18x18                     ║\n");
    printf("║- [11] Matriz transposta da 18x18 criada                 ║\n");
    printf("║- [12] Sair                                              ║\n");
    printf("╚═════════════════════════════════════════════════════════╝\n");

    printf("Selecione a opção que deseja --> ");
    while (scanf("%d", &op) <= 0 || op < 1 || op > 12)
    {
        printf(" Opção inválida, por favor digite uma opção válida -> ");
        ft_clean_input();
    }
    return op;
}

int **ft_matriz_vetor(int vetor[N])
{
    int **matriz = (int **)malloc(4 * sizeof(int *));

    if(!matriz)
    {
        printf("Erro na alocação das linhas da matriz!\n");
		return NULL;
    }

    for(int i = 0; i < 4 ; i++)
    {
        matriz[i] = (int *)malloc(N * sizeof(int));
        if(!matriz[i])
        {
            printf("Erro na alocação das colunas da matriz!\n");
            return NULL;
        }
    }

    for(int j = 0; j < 4; j++)
        for(int z = 0; z < N; z++)
            matriz[j][z] = vetor[z];
    
	return matriz;
}

float	ft_mediana(int vetor[N])
{
	float	mediana;
	int		*vetor_ordenado;
	int		index;

	vetor_ordenado = ft_vetor_ordenado_crescente(vetor, 0);
	index = N / 2;
	mediana = ((float)vetor_ordenado[index - 1] + (float)vetor_ordenado[index]) / 2;
	return mediana;
}

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


int	*ft_vetor_simetrico(int vetor[N])
{
	int	*vetor_simetrico = ft_vetor_ordenado_crescente(vetor, 1);

	return vetor_simetrico;
}



int ft_maior_divisivel(int vetor[N])
{
	int c = 0;
	int j = 0;
	int two_digits;
	int *vetor_valores;

	for(int i = 0; i < N; i++)
		if (vetor[i] > 2 && vetor[i] % 5 == 0)
			c++;
	
	vetor_valores = (int *)malloc(c * sizeof(int));

	if(!vetor_valores)
	{
		printf("Erro na alocação do vetor_valores!\n");
		return 0;
	}

	for(int i = 0; i < N; i++)
		if (vetor[i] > 2 && vetor[i] % 5 == 0)
			vetor_valores[j++] = vetor[i];
	
	two_digits = ft_check_2digits(vetor_valores, c);

	ft_printf_vetor(vetor_valores, c);

	free(vetor_valores);

	return ((c*2) + two_digits);

}


void	ft_vetor_soma_metades(int vetor[N])
{
	int	i = -1;
	int	*vetor_metade;
    int i_metade = N/2;

	vetor_metade = (int *)malloc(sizeof(int) * (i_metade));
	if (!vetor_metade)
	{
		printf("Erro na alocação do vetor_metade!\n");
		return ;
	}
	while (++i < i_metade)
		vetor_metade[i] = vetor[i] + vetor[i_metade + i];

	ft_printf_vetor(vetor_metade, N / 2);
}

int *ft_ler_vetor(int flag)
{
	int *vetor = (int *)malloc(sizeof(int) * N);
	int i = -1;

	if(!vetor)
    {
        printf("Erro na alocação do vetor!\n");
		return NULL;
    }

	if(flag)
		printf("[NOVO VETOR]\n");
	printf("Insira 18 valores inteiros compreendidos entre 1 e 11 inclusive\n");
    while (++i < N)
    {
        printf(">> ");
        while(scanf("%d", &vetor[i]) <= 0 || (vetor[i] < 1 || vetor[i] > 11))
        {
            printf("Erro, insira novamente > ");
            ft_clean_input();
        }
    }

	return vetor;
}

int ft_somar_vetor(int vetor[N])
{
	int i = -1;
	int somatorio = 0;
	while(++i < N)
		somatorio += vetor[i];
	if(somatorio == 18)
		return 1;
	return 0;

}
int *ft_vetor_baralhado(int vetor[N])
{
	int *novo_vetor = ft_ler_vetor(1);
	int check_index[N] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int vetor_tmp[N] = {};
	int *vetor_metades = (int *)malloc(N * sizeof(int));
	int i, j, k = -1;

	if(!vetor_metades)
    {
        printf("Erro na alocação do vetor!\n");
		return NULL;
    }
	srand(time(NULL));

	i = (rand() % 2) * 8;
	j = (rand() % 2) * 8;

	if(i < 8)
		while(i <= 8)	
			vetor_tmp[++k] = vetor[i++];
	else
		while(i < 17)
			vetor_tmp[++k] = vetor[++i];
	k++;
	if(j < 8)
		while(j <= 8)	
			vetor_tmp[k++] = novo_vetor[j++];
	else
		while(j < 17)	
			vetor_tmp[k++] = novo_vetor[++j];

	i = 0;
	while(!ft_somar_vetor(check_index))
	{
		j = rand() % 18;
		if(!check_index[j])
		{
			check_index[j] = 1;
			vetor_metades[i++] = vetor_tmp[j];
		}
	}

	return vetor_metades;
}

void ft_decompor(int vetor[N])
{
	int i = -1;
	int fator = 2;
	int num;

	while(++i < N)
	{
		if(vetor[i] % 2 != 0)
		{
			num = vetor[i];
			if(num < 10)
				printf("0%d = 1 ", num);
			else
				printf("%d = 1 ", num);
			while(num != 1)
			{
				while(num % fator != 0)
					fator++;
				printf("x %d ", fator);
				num /= fator;
				fator = 2;
			}
			printf("\n");
		}
	}
}

int **ft_multiplicar_matriz(int vetor[N], int vetor2[N])
{
	int matriz[1][N] = {};
	int matriz2[N][1] = {};
	int **matriz_final = (int **)malloc(N * sizeof(int *));

	if(!matriz_final)
    {
        printf("Erro na alocação das linhas da matriz_final!\n");
		return NULL;
    }
	for(int i = 0; i < N ; i++)
    {
        matriz_final[i] = (int *)malloc(N * sizeof(int));
        if(!matriz_final[i])
        {
            printf("Erro na alocação das colunas da matriz_final!\n");
            return NULL;
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

void ft_transposta(int **matriz)
{
	int matriz_transposta[N][N] = {};

	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			matriz_transposta[j][i] = matriz[i][j];

	for(int i = 0; i < N; i++)
	{	
		for(int j = 0; j < N; j++)
			printf("%d ",matriz_transposta[i][j]);
		puts("");
	}
}

void ft_ajuda(void)
{
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
	printf("║      ./nome_do_programa --help                                    ║\n");
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

void ft_ajuda_cmd()
{
    printf("╔═══════════════════════════════════════════════════════════════════╗\n");
    printf("╠════════════════════════════  AJUDA BÁSICA  ═══════════════════════╣\n");
    printf("║  [COMO EXECUTAR O PROGRAMA]                                       ║\n");
    printf("║  1. Execute o programa compilado digitando:                       ║\n");
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

void ft_free_matriz(int **matriz, int linhas)
{
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
}

void	ft_printf_vetor(int *vetor, int size)
{
	int i = -1;
	while (++i < size)
		printf("%d ", vetor[i]);
}

void ft_print_matriz(int **matriz, int linhas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

void	ft_clean_input(void)
{
	while (getchar() != '\n')
		;
}

void ft_exec_menu(int opcao, int vetor[N])
{
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

	
	default:
		break;
	}
	ft_clean_input();
	ft_wait_enter();
}

void ft_wait_enter()
{
	char *pos, av[5] = {};
	int enter = 0;
	do
	{
		printf("\nPressione a tecla ENTER para avançar");
		fgets(av, 5, stdin);
		pos = strchr(av, '\n');
		*pos = '\0';

		if ((strcmp(av, "\0") == 0))
		{
			enter = 1;
			ft_clear_screen();
		}
		else
			enter = 0;
	} while (enter == 0);
}

void ft_clear_screen(void)
{
	system("clear");
}

int ft_check_2digits(int vetor[N], int size)
{
	int c = 0;
	for(int i = 0; i < size; i++)
		if(vetor[i] >= 10)
			c++;
	return c;
}

void ft_spaces(int td)
{
	while (td)
	{
		printf(" ");
		td--;
	}
}

void ft_option_one(int vetor[N])
{
	int td = 55 - (37 + ft_check_2digits(vetor, N));
	int **matriz = ft_matriz_vetor(vetor);

	if(!matriz)
		return;
	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                 CONSTRUÇÃO MATRIZ 4X18                 ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N);
	ft_spaces(td);
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
		ft_spaces(td);
		printf(" ║\n");
	}
	printf("╚════════════════════════════════════════════════════════╝\n");

	ft_free_matriz(matriz, 4);
}

void ft_option_two(int vetor[N])
{

	int td = 55 - (37 + ft_check_2digits(vetor, N));

	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║                  CALCULAR LOGORITMOS                   ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N);
	ft_spaces(td);
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

void ft_option_three(int vetor[N])
{
	int td = 55 - (37 + ft_check_2digits(vetor, N));
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
	ft_printf_vetor(vetor, N);
	ft_spaces(td);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR ORDENADO ↓                                    ║\n");
	printf("║ ");
	ft_printf_vetor(vetor_ordenado, N);
	ft_spaces(td);
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

void ft_option_four(int vetor[N])
{
	int td;
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
	ft_printf_vetor(vetor, N);
	td = 73 - (37 + ft_check_2digits(vetor, N));
	ft_spaces(td);
	printf(" ║\n");
	printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
	printf("║                                                                          ║\n");
	printf("║  ↓ VETOR SIMÉTRICO ORDENADO ↓                                            ║\n");
	printf("║ ");
	ft_printf_vetor(vetor_simetrico, N);
	td = 73 - (55 + ft_check_2digits(vetor, N));
	ft_spaces(td);
	printf(" ║\n");
	printf("╚══════════════════════════════════════════════════════════════════════════╝\n");

}

void ft_option_five(int vetor[N])
{
	int td = 55 - (37 + ft_check_2digits(vetor, N));

	ft_clear_screen();
	printf("╔════════════════════════════════════════════════════════╗\n");
    printf("║       VALORES MAIORES QUE 2 E DIVISIVEIS POR 5         ║\n");
	printf("╠════════════════════════════════════════════════════════╣\n");
	printf("║                                                        ║\n");
	printf("║  ↓ VETOR INCIAL ↓                                      ║\n");
	printf("║ ");
	ft_printf_vetor(vetor, N);
	ft_spaces(td);
	printf(" ║\n");
	printf("║                                                        ║\n");
	printf("║ ↓ VALORES MAIORES QUE 2 E DIVISIVEIS POR 5 ↓           ║\n");
	printf("║ ");
	td = 54 - (ft_maior_divisivel(vetor)); //dar return ao c
	ft_spaces(td);
	printf(" ║\n");
	printf("╚════════════════════════════════════════════════════════╝\n");

}