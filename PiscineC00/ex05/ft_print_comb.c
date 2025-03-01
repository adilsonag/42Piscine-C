/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:18:28 by anestor           #+#    #+#             */
/*   Updated: 2025/02/16 17:18:48 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char valor)
{
	write(1, &valor, 1);
}

void	ft_print_numbers(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	if (!(i == 7 && j == 8 && k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
