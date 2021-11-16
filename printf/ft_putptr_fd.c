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

#include "ft_printf.h"

unsigned int	ft_putptr_fd(unsigned long n, int fd, unsigned int *count)
{
	char	c;
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putptr_fd(n / 16, fd, count);
	}
	c = str[n % 16];
	ft_putchar_fd(c, fd);
	(*count)++;
	return (*count);
}
