/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:08:12 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/19 16:06:22 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	rush(int x, int y)
{	
	int	i;
	int	j;

j = 0;
	while (j < y)
	{
i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0)
				|| (i == (x - 1) && j == (y - 1) && x > 1 && y > 1))
				ft_putchar('A');
			else if (i == 0 && j == (y - 1) || i == (x - 1) && j == 0)
				ft_putchar('C');
			else if (i > 0 && i < (x - 1) && j > 0 && j < (y -1))
				ft_putchar(' ');
			else
				ft_putchar('B');
		i++;
		}
		ft_putchar ('\n');
	j++;
	}
}
