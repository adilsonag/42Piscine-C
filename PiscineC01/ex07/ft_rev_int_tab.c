/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:56:29 by anestor           #+#    #+#             */
/*   Updated: 2025/02/17 13:03:19 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/*int    main(void)
{
    int    tab[] = {1, 2, 3, 4, 5, 6};

    ft_rev_int_tab(tab, 6);
    printf("%d", tab[0]);
    printf("%d", tab[1]);
    printf("%d", tab[2]);
    printf("%d", tab[3]);
    printf("%d", tab[4]);
    printf("%d", tab[5]);
}*/
