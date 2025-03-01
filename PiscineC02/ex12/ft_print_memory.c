/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:26:30 by anestor           #+#    #+#             */
/*   Updated: 2025/02/18 14:29:10 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	chunk_size;

	i = 0;
	while (i < size)
	{
		ft_putaddr((unsigned long)(addr + i));
		if (size - i >= 16)
			chunk_size = 16;
		else
			chunk_size = size - i;
		ft_putmemhex((unsigned char *)(addr + i), chunk_size);
		ft_putmemchar((unsigned char *)(addr + i), chunk_size);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
