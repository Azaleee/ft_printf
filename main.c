/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:16:56 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/23 00:34:34 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	a;

	a = 1;
	ft_printf(
		"\n-written char number : %d-\n\n",
		ft_printf(
			"%d - %c - %s - %p - %i - %u - %x - %X - %%\n",
			-42,
			'4',
			"42",
			&a,
			0x2A,
			42,
			-42,
			42
			)
		);
	ft_printf("--------%d-\n", ft_printf("%p %p\n", LONG_MIN, LONG_MAX));
	ft_printf("--------%d-\n", ft_printf("%s\n", NULL));
	return (0);
}
