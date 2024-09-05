/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:07:11 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/20 15:56:05 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_p;
int	g_s;
int	g_t;

void	ft_putchar(void)
{	
	write(1, &g_p, 1);
	write(1, &g_s, 1);
	write(1, &g_t, 1);
	write(1, ", ", 1);
}

void	ft_print_comb(void)
{
g_p = '0';
	while (g_p <= '7')
	{
	g_s = (g_p + 1);
		while (g_s <= '8')
		{
		g_t = (g_s + 1);
			while (g_t <= '9')
			{
				ft_putchar();
				g_t++;
			}
			g_s++;
		}	
		g_p++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}	
*/