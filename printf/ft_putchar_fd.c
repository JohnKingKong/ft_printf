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

// ecrire unefct qui ecrit le char c sur le file descriptor donne

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	int	len;

	len = write(fd, &c, sizeof(c));
	return (len);
}
