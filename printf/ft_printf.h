/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:35:09 by jvigneau          #+#    #+#             */
/*   Updated: 2021/10/21 15:33:31 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

unsigned int	ft_puthexa(unsigned int n, int fd, unsigned int	*count);
unsigned int	ft_puthexu_fd(unsigned int n, int fd, unsigned int *count);
unsigned int	ft_putptr_fd(unsigned long n, int fd, unsigned int *count);
int				ft_print_char(const char *str, va_list vaList);
int				ft_print_num(const char *str, va_list vaList);
int				ft_print_string(const char *str, va_list vaList);
int				ft_print_hexa(const char *str, va_list vaList);
void			check_conditions(const char	*str, va_list vaList, int *count);
unsigned int	ft_putnbr_fd(int n, int fd, unsigned int *count);
unsigned int	ft_putunbr_fd(unsigned int n, int fd, unsigned int *count);
int				ft_putchar_fd(char c, int fd);
int				ft_putstr_fd(char *s, int fd);
int				ft_printf(const char *str, ...);

#endif