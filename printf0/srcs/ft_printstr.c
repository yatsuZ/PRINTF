/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:59:08 by yzaoui            #+#    #+#             */
/*   Updated: 2022/12/16 20:40:47 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printstr(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (*str == 0)
		return (0);
	else
		return (ft_printchar(*str) + ft_printstr(str + 1));
}
