/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(const char *str, va_list vaList)
{
	int	count;
	int	arg;

	count = 0;
	if (*str == 'c')
	{
		arg = va_arg(vaList, int);
		ft_putchar_fd(arg, 1);
		count++;
	}
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	str++;
	return (count);
}
