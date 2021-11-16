/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putHEXA_fd.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui ecrit le HEXA n sur le fd donne

#include "ft_printf.h"

unsigned int	ft_puthexu_fd(unsigned int n, int fd, unsigned int *count)
{
	unsigned long	nb;
	char			c;
	char			*str;

	str = "0123456789ABCDEF";
	nb = n;
	if (nb >= 16)
	{
		ft_puthexu_fd(nb / 16, fd, count);
		nb = nb % 16;
	}
	c = str[nb % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
