/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex(const char *str, va_list vaList)
{
	unsigned int	hexnum;
	unsigned int	count;

	count = 0;
	hexnum = va_arg(vaList, unsigned int);
	count = ft_puthexa(hexnum, 1, &count) - 1;
	str++;
	return (count);
}

static int	hexu(const char *str, va_list vaList)
{	
	unsigned int	hexnuma;
	unsigned int	count;

	count = 0;
	hexnuma = va_arg(vaList, unsigned int);
	count = ft_puthexu_fd(hexnuma, 1, &count) - 1;
	str++;
	return (count);
}

int	ft_print_hexa(const char *str, va_list vaList)
{
	unsigned int	count;
	unsigned long	ptrnum;

	count = 0;
	if (*str == 'x')
		count = hex(str, vaList);
	else if (*str == 'X')
		count = hexu(str, vaList);
	else
	{
		ptrnum = va_arg(vaList, unsigned long);
		ft_putchar_fd('0', 1);
		ft_putchar_fd('x', 1);
		if (ptrnum == '0')
		{
			ft_putchar_fd('0', 1);
			count += 1;
		}
		else
			count = ft_putptr_fd(ptrnum, 1, &count) + 1;
		str++;
	}
	return (count);
}
