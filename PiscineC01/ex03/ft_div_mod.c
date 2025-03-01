/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:02:42 by anestor           #+#    #+#             */
/*   Updated: 2025/02/17 12:55:28 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int 	a;
	int		b;
	int 	*div;
	int		*mod;
	int		division;
	int		modulo;

	a = 42;
	b = 10;
	div = &division;
	mod = &modulo;
	ft_div_mod(a, b, div, mod);
	printf("div almacena:" "%d ", *div);
	printf("mod almacena:" "%d", *mod);
}*/
