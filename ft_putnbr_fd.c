/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/23 16:24:29 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui ecrit le int n sur le fd donne

#include "ft_printf.h"

unsigned int	ft_putnbr_fd(int n, int fd, unsigned int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		(*count)++;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd, count);
		nb = nb % 10;
	}
	ft_putchar_fd((48 + nb), fd);
	(*count)++;
	return (*count);
}
