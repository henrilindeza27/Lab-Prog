/**
 * @file    main-team-15.c
 * @author  Henrique Veríssimo / Martim Afonso / Afonso Paraíba / Maria Terrinha / Tomé Pedro / Ana Amoreira
 * @version 1.0
 */

#include "functions-team-15.h"

int	main(int argc, char **argv)
{
	int *vetor; // Vetor que o utilizador vai inserir
    int option; // Recebe a opção inserida no menu
	int flag = 0; // Usada para controlar se a matriz na opção 10 foi criada
	
	if (argc == 2)
	{
		if (!strcmp("--help", argv[1]))
		{
            ft_clear_screen();
			ft_ajuda_cmd();
		}
		else
			printf("Erro flag não reconhecida\n");
		return (1);
	}

	ft_mostrar_apresentação();
	vetor = ft_ler_vetor(0);
	
	if(!vetor)
	{
		ft_clear_screen();
		printf("(ERROR) Vetor não definido!\nPrograma encerrado!\n");
		return (1);
	}

	ft_clear_screen();
	option = ft_menu();
	
    while(option != 12)
	{
		ft_exec_menu(option, vetor, &flag);
		option = ft_menu();
	}
    ft_final_banner();
	free(vetor);

	return (0);
}