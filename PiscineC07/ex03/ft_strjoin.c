/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:06:09 by anestor           #+#    #+#             */
/*   Updated: 2025/02/25 09:06:21 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_all_lengths(int size, char **strs, char *sep)
{
	int		sum;
	int		i;
	char	*all_together;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		sum += ft_strlen(sep) * (size - 1);
	}
	all_together = (char *)malloc(sizeof(char) * sum);
	if (all_together == NULL)
		return (NULL);
	return (all_together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all_together;

	all_together = ft_all_lengths(size, strs, sep);
	if (all_together == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			all_together[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			all_together[c++] = sep[j++];
		i++;
	}
	all_together[c] = '\0';
	return (all_together);
}
