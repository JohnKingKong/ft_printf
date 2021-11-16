/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(const char *str, va_list vaList)
{
	int				num;
	unsigned int	count;
	unsigned int	unsnum;

	count = 0;
	if (*str == 'd' || *str == 'i')
	{
		num = va_arg(vaList, int);
		count = ft_putnbr_fd(num, 1, &count) - 1;
		str++;
	}
	else if (*str == 'u')
	{
		unsnum = va_arg(vaList, unsigned int);
		count = ft_putunbr_fd(unsnum, 1, &count) - 1;
		str++;
	}
	return (count);
}
