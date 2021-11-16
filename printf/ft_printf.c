/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:16:08 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/23 15:21:40 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	valist;

	count = 0;
	va_start(valist, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_conditions(str, valist, &count);
			str++;
			count++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			str++;
			count++;
		}
	}
	va_end(valist);
	return (count);
}
