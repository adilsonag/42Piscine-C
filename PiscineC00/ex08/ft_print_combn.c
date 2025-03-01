/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:01:12 by anestor           #+#    #+#             */
/*   Updated: 2025/02/16 20:02:13 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combination(int n, int current[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(current[i] + '0');
		i++;
	}
	if (current[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb_recursive(int n, int current[], int index, int start)
{
	int	i;

	if (index == n)
	{
		ft_print_combination(n, current);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		current[index] = i;
		ft_print_comb_recursive(n, current, index + 1, i + 1);
		i++;
	}
}
