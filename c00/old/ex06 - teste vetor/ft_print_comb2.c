/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:34:35 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:28 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int p1, int p2, int s1, int s2)
{
	write(1, &p1, 1);
	write(1, &p2, 1);
	write(1, " ", 1);
	write(1, &s1, 1);
	write(1, &s2, 1);
	write(1, ", ", 1);
}

void	ft_print_comb2(void)
{

	char	comb[6];

comb[0] = '0'';
	while (comb[0] <= '9')
	{
	p2 = '0';
		while (s1 <= '8')
		{
		s1 = 0;
			while (s2 <=

		ft_putchar(p1, p2, s1, s2);
		s++;
		}	
	p++;
	}	
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

