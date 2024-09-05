/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamacie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:26:20 by joamacie          #+#    #+#             */
/*   Updated: 2024/08/26 16:20:34 by joamacie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	swap;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		swap = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab [j + 1])
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swap = 1;
			j++;
		}
		if (!swap)
		{
			return ;
		}
		i++;
	}
}
