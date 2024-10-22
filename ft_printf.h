/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:30:33 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/23 00:27:02 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *hook, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nb);
size_t	ft_strlen(char *str);
size_t	ft_putadr(void *adr, const char *hexa_tab);
size_t	ft_putunbr(unsigned int nb);
size_t	ft_puthexa(unsigned int nb, char *hexa);

#endif