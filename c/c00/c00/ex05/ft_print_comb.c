/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:07:11 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/21 16:47:59 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	p;
	int	s;
	int	t;

p = '0';
	while (p <= '7')
	{
	s = (p + 1);
		while (s <= '8')
		{
		t = (s + 1);
			while (t <= '9')
			{
				write(1, &p, 1);
				write(1, &s, 1);
				write(1, &t, 1);
				if (p != '7' || s!='8' || t != '9')
				{
					write(1, ", ", 1);
				}
				t++;
			}
			s++;
		}
		p++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

