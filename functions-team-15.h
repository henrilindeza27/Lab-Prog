#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define N 18


void ft_clean_input(void);
void	ft_printf_vetor(int *vetor, int size, int i);
int	*ft_vetor_simetrico(int vetor[N]);
float ft_mediana(int vetor[N]);
int ft_maior_divisivel(int vetor[N]);
int	*ft_vetor_ordenado_crescente(int vetor[N], int flag_simetrico);
int ft_vetor_soma_metades(int vetor[N]);

void ft_print_matriz(int **matriz, int linhas);
int **ft_matriz_vetor(int vetor[N]);
int	**ft_decompor(int vetor[N]);
int *ft_ler_vetor(int flag);
int **ft_vetor_baralhado(int vetor[N]);
int **ft_multiplicar_matriz(int vetor[N], int vetor2[N]);
int	*ft_vetor_ordenado_crescente(int vetor[N], int flag_simetrico);
int **ft_transposta(int **matriz);
void ft_free_matriz(int **matriz, int linhas);
void ft_ajuda_cmd(void);
int ft_menu();
void ft_exec_menu(int opcao, int vetor[N]);
void ft_wait_enter();
void ft_clear_screen(void);
int ft_check_digits(int vetor[N], int size);


void ft_option_one(int vetor[N]);
void ft_option_two(int vetor[N]);
void ft_option_three(int vetor[N]);
void ft_option_four(int vetor[N]);
void ft_option_five(int vetor[N]);
void ft_option_six(int vetor[N]);
void ft_option_eight(int vetor[N]);
void ft_option_nine(int vetor[N]);
void ft_option_ten(int vetor[N]);
void ft_option_eleven(int vetor[N]);

int **ft_save_to_matriz(int vetor[N], int vetor2[N], int vetor3[N], int a, int b);
int ft_check_impar(int vetor[N]);


#endif