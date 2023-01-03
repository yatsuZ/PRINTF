/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:25:13 by yzaoui            #+#    #+#             */
/*   Updated: 2022/12/16 19:38:45 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test(int nbrc)
{
	int nbrc2;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("je test justeles string sans\tpourcentage :).\n");
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("je test justeles string sans\tpourcentage :).\n");
	if (nbrc == nbrc2)
		printf("les 2 printf on le meem nombre de char soit %d\n", nbrc);
	else
		printf("/!\\PAS EGAUX. Nombre de charactere = %d\n", nbrc);
}

void	testPOUR(int nbrc)
{
	int nbrc2;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("je test %%%%\n");
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("je test %%%%\n");
	if (nbrc == nbrc2)
		printf("les 2 printf on le meem nombre de char soit %d\n", nbrc);
	else
		printf("/!\\PAS EGAUX. Nombre de charactere = %d\n", nbrc);
}

void	testCHAR(int nbrc)
{
	int nbrc2;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("je test %%c %c%c%c%c%c\n", 's', 'a', 'l', 'u', 't');
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("je test %%c %c%c%c%c%c\n", 's', 'a', 'l', 'u', 't');
	if (nbrc == nbrc2)
		printf("les 2 printf on le meme nombre de char soit %d\n", nbrc);
	else
		printf("/!\\PAS EGAUX. Nombre de charactere = %d\n", nbrc);
}

void	testSTR(int nbrc)
{
	int nbrc2;
	char	*stest = "Salut c'est un test juste avec des string\n";
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("%s", stest);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("%s", stest);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("/!\\PAS EGAUX. Nombre de charactere = %d\n", nbrc);
}

void	testPTR(int nbrc)
{
	int nbrc2;
	int	res = 0;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("%p\n", &res);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("%p\n", &res);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

void	testDEC(int nbrc)
{
	int nbrc2;
	int nombre = -1;

	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("nombre decimale = %d\n", nombre);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = printf("nombre decimale = %d\n", nombre);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

void	testINT(int nbrc)
{
	int nbrc2;
	int nombre = -134;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("integer base 10 = %i\n", nombre);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = ft_printf("integer base 10 = %i\n", nombre);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

void	testUNSIGNED(int nbrc)
{
	int nbrc2;
	unsigned long nombre = 9223372036854775807;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("unsigned base 10 = %u\n", nombre);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = ft_printf("unsigned base 10 = %u\n", nombre);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

void	testhexa(int nbrc)
{
	int nbrc2;
	int nombre = 16;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("hexa = %x\n", nombre);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = ft_printf("hexa = %x\n", nombre);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

void	testHEXA(int nbrc)
{
	int nbrc2;
	int nombre = 15;
	
	printf("FT_PRINTF:\n\n");
	nbrc = ft_printf("HEXA = %X\n", nombre);
	printf("Nombre de charactere = %d\n", nbrc);
	printf("--------------------\nprintf:\n\n");
	nbrc2 = ft_printf("HEXA = %X\n", nombre);
	if (nbrc == nbrc2)
		printf("les 2 printf on le memem nombre de char soit %d\n", nbrc);
	else
		printf("\n/!\\nbrc = %d et nbrc2 = %i\n", nbrc, nbrc2);
}

int	main()
{
	int		nbrc;
	int		t;

	nbrc = 0;
	t = 0;
	while (t < 10)
	{
		ft_printf("\n|-------------------------|\n\nt = %d\n\n", t);
		if (t == 0)
			test(nbrc);
		else if (t == 1)
			testPOUR(nbrc);
		else if (t == 2)
			testCHAR(nbrc);
		else if (t == 3)
			testSTR(nbrc);
		else if (t == 4)
			testPTR(nbrc);
		else if (t == 5)
			testDEC(nbrc);
		else if (t == 6)
			testINT(nbrc);
		else if (t == 7)
			testUNSIGNED(nbrc);
		else if (t == 8)
			testhexa(nbrc);
		else if (t == 9)
			testHEXA(nbrc);
		t++;
	}
	return (0);
}
