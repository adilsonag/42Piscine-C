/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:21:36 by anestor           #+#    #+#             */
/*   Updated: 2025/02/16 17:21:59 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char valor)
{
	write(1, &valor, 1);
}

void	ft_mostrar(int valor)
{
	int	x;
	int	y;

	if (valor > 9)
	{
		x = valor / 10;
		y = valor % 10;
		ft_putchar(x + '0');
		ft_putchar(y + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(valor + '0');
	}
}

void	ft_resultado(int x, int y)
{
	ft_mostrar(x);
	ft_putchar(' ');
	ft_mostrar(y);
	if (x < 98 || y < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_resultado(x, y);
			y++;
		}
		x++;
	}
}
