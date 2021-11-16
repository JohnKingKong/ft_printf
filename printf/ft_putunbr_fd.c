/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui ecrit le int n sur le fd donne

#include "ft_printf.h"

unsigned int	ft_putunbr_fd(unsigned int n, int fd, unsigned int *count)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putunbr_fd(nb / 10, fd, count);
		nb = nb % 10;
	}
	ft_putchar_fd((48 + nb), fd);
	(*count)++;
	return (*count);
}
