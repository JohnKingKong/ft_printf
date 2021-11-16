/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:35 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:32 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *str, va_list vaList)
{
	int		count;
	int		len;
	char	*prnstr;

	count = 0;
	prnstr = va_arg(vaList, char *);
	if (!prnstr)
	{
		ft_putstr_fd("(null)", 1);
		count += 5;
		str++;
	}
	else
	{
		len = ft_putstr_fd(prnstr, 1);
		count += len - 1 ;
		str++;
	}
	return (count);
}
