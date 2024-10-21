/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:29:32 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/21 18:39:01 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_putstr(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 7));
	else
		return (write(1, str, ft_strlen(str)));
}

size_t	ft_putnbr(int nb)
{
	size_t	len;

	len = 0;
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
		return (len);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
		len++;
	}
	ft_putchar('0' + nb % 10);
	return (len);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_putadr(void *adr)
{
	char			*hexa_tab;
	int				bytes;
	unsigned long	adress;
	char			hexa;
	size_t			i;

	if (adr == NULL)
		return (write(1, "0x0", 3));
	hexa_tab = "0123456789abcdef";
	i = 0;
	bytes = 32;
	adress = (unsigned long)adr;
	write(1, "0x", 2);
	while (bytes >= 0)
	{
		hexa = hexa_tab[(adress >> bytes) & 0xf];
		write(1, &hexa, 1);
		bytes -= 4;
		i++;
	}
	return (i + 2);
}
