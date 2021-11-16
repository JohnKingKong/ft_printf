/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui ecrit le hexa n sur le fd donne

#include "ft_printf.h"

unsigned int	ft_puthexa(unsigned int n, int fd, unsigned int *count)
{
	long long	nb;
	char		c;
	char		*str;

	str = "0123456789abcdef";
	nb = n;
	if (nb >= 16)
	{
		ft_puthexa(nb / 16, fd, count);
		nb = nb % 16;
	}
	c = str[nb % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
