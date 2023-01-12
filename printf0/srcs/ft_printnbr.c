/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:23:12 by yzaoui            #+#    #+#             */
/*   Updated: 2022/12/16 20:40:13 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_prnbr(long n, char *base, long len)
{
	int	compteur;

	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		return (ft_prnbr(n, base, len) + 1);
	}
	else if (n < len && n >= 0)
	{
		write(1, &base[n], 1);
		return (1);
	}
	else
	{
		compteur = (1 + ft_prnbr(n / len, base, len));
		write(1, &base[n % len], 1);
		return (compteur);
	}
}

int	ft_prptr(unsigned long n, char *base, unsigned long len)
{
	int	compteur;

	if (n < len)
	{
		write(1, &base[n], 1);
		return (1);
	}
	else
	{
		compteur = (1 + ft_prptr(n / len, base, len));
		write(1, &base[n % len], 1);
		return (compteur);
	}
}

int	ft_prexa(unsigned int n, char *base, unsigned int len)
{
	int	compteur;

	if (n < len)
	{
		write(1, &base[n], 1);
		return (1);
	}
	else
	{
		compteur = (1 + ft_prexa(n / len, base, len));
		write(1, &base[n % len], 1);
		return (compteur);
	}
}
