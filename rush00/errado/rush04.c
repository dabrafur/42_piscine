/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:08:12 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/18 22:34:50 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	rush(int x, int y)
{	
	int	i;
	int	j;

i = 0;
	while (i <= y)
	{
j = 0;
		while (j <= x)
		{
			if ((i == 0 && j == 0) || (i == y && j == x))
				ft_putchar('A');
			else if ((i == 0 && j > 0 && j < x)
				|| (i == y && j > 0 && j < x))
				ft_putchar('B');
			else if ((i > 0 && i < y) && (j == 0 || j == x))
				ft_putchar('B');
			else if ((i == 0 && j == x) || (i == y && j == 0))
				ft_putchar('C');
			else
				ft_putchar(' ');
		j++;
		}
		ft_putchar ('\n');
	i++;
	}
}
