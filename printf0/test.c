/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:34:59 by yzaoui            #+#    #+#             */
/*   Updated: 2022/12/23 12:15:39 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)  
{
    int number=5;
    
    printf("0123456789\n");
	printf("%-d \n", number);//sa fais rien ?
    printf("%010d\n", number);//?sa fais rien aussi ??
    printf("%.10d \n", number);//
    printf("%#x \n", number);
    printf("%#X \n", number);
    printf("%x \n", number);

    printf("% d \n", number);//si positive il y a un espace
    printf("%+i \n", (unsigned int)number);//si positive il y a un +
/*
    int number=5;

	printf("---%-d----\n", 6, number);
*/
/*	int	number = 20;

    printf(" %-10d \n", number);
    printf(" %010d \n", number);
    printf(" %.10d \n", number);
    printf(" %#10d \n", number);  
    printf(" % 10d \n", number);
    printf(" %+10d \n", number);
//	printf("- -0. -\n");
	return (0);

*/
}
