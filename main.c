/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:16:56 by mosmont           #+#    #+#             */
/*   Updated: 2024/10/21 20:05:39 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//ft_printf("- %d -", ft_printf("salut%d#%s,    %c%c%c", 0, "-891", 'c', 'c', 'e'));
	int *test;
	int a = 10;

	test = &a;
	ft_printf("-%d-", ft_printf("%u\n", -1));
	return (0);
}
