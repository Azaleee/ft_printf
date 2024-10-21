/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:34:34 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/21 20:21:35 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr(unsigned int nb)
{
	if (nb / 10)
		return (ft_putunbr(nb / 10) + ft_putunbr(nb % 10));
	else
		return (ft_putchar(nb + '0'));
}
