/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:30:49 by anestor           #+#    #+#             */
/*   Updated: 2025/02/24 10:31:21 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer;
	int	bound;
	int	index;

	bound = max - min;
	index = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
