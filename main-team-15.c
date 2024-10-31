#include "functions-team-15.h"

int	main(int argc, char **argv)
{
	int *vetor;
    int option;

	if (argc == 2)
	{
		if (!strcmp("--help", argv[1]))
		{
            ft_clear_screen();
			ft_ajuda_cmd();
		}
		return (0);
	}

	vetor = ft_ler_vetor(0);
	if (!vetor)
	{
		printf("ERRO\n");
		return (0);
	}
    
	
	option = ft_menu();
    while(option != 12)
	{
		ft_exec_menu(option, vetor);
		option = ft_menu();
	}
    

	free(vetor);
	return (0);
}