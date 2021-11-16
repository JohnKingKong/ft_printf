/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:22:43 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/01 11:46:42 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui ecrit la str s sur le fd donne

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!s)
		return (0);
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	return (i);
}
