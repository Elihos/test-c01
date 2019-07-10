/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahenry <ahenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:29:22 by ahenry            #+#    #+#             */
/*   Updated: 2019/07/10 12:08:47 by ahenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void 	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int test;
	int test2;
	int div;
	int mod;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	char * teststr;
	int tabtest[5];
	int tabsize;

	test = 5;
	test2 = 21;
	div = 1;
	mod = 1;
	ptr = &test;
	ptr9 = &ptr8;
  	ptr8 = &ptr7;
	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr;
	teststr = "strlen";
	tabsize = 5;
	srand (time (NULL));
	for (int i = 0; i < tabsize; i++)
		tabtest[i] = rand() % 100 + 1;

	ft_ft(&test);
	printf("ex00 : %d\n", test);
	test = 21;
	printf("change valeur : %d\n", test);
	ft_ultimate_ft(ptr9);
	printf("ex01 : %d\n", test);
	printf("ex02 : params : %d, %d", test, test2);
	ft_swap(&test, &test2);
	printf(" | result : %d, %d\n", test, test2);
	ft_div_mod(test2, test, &div, &mod);
	printf("ex03 : %d / %d => div : %d, mod : %d\n", test2, test, div, mod);
	printf("ex04 : params : %d, %d", test2, test);
	ft_ultimate_div_mod(&test2, &test);
	printf(" | result : %d, %d\n", test2, test);
	ft_putstr("ex05 : test ft_putstr\n");
	printf("ex06 : %s => %d\n", teststr, ft_strlen(teststr));
	printf("ex07 : params : [ ");
	for (int i = 0; i < tabsize; i++)
		printf("%d ", tabtest[i]);
	ft_rev_int_tab(tabtest, tabsize);
	printf("] | result : [ ");
	for (int i = 0; i < tabsize; i++)
		printf("%d ", tabtest[i]);
	printf("]\n");
	printf("ex08 : params : [ ");
	for (int i = 0; i < tabsize; i++)
		printf("%d ", tabtest[i]);
	ft_sort_int_tab(tabtest, tabsize);
	printf("] | result : [ ");
	for (int i = 0; i < tabsize; i++)
		printf("%d ", tabtest[i]);
	printf("]\n");	
	return (0);
}
