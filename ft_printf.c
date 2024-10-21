/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:17:05 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/21 18:35:56 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_args(char *hook)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (hook[i] != '\0')
	{
		if (hook[i] == '%')
			result++;
		i++;
	}
	return (result);
}

size_t	check(va_list *args, char hook)
{
	if (hook == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	if (hook == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (hook == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (hook == 'p')
		return (ft_putadr(va_arg(*args, void *)));
	if (hook == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	if (hook == '%')
		return (write(1, "%", 1));
	else
		return (-1);
}

int	ft_printf(char *hook, ...)
{
	int		i;
	va_list	args;
	int		final;

	va_start(args, hook);
	i = 0;
	final = 0;
	while (hook[i] != '\0')
	{
		if (hook[i] == '%')
		{
			i++;
			final += check(&args, hook[i]);
		}
		else
			final += ft_putchar(hook[i]);
		i++;
	}
	va_end(args);
	return (final);
}
