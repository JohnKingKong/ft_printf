/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conditions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/26 17:13:21 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_conditions(const char	*str, va_list vaList, int *count)
{
	int	len;

	len = 0;
	if (*str == 's')
	{
		len = ft_print_string(str, vaList);
		(*count) += len;
	}
	else if (*str == 'd' || *str == 'i' || *str == 'u')
	{
		len = ft_print_num(str, vaList);
		(*count) += len;
	}
	else if (*str == 'c' || *str == '%')
	{
		ft_print_char(str, vaList);
	}
	else if (*str == 'x' || *str == 'X' || *str == 'p')
	{
		len = ft_print_hexa(str, vaList);
		(*count) += len;
	}
}
