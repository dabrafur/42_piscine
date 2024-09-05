/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:34:35 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/21 16:25:41 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	g_p1;
int	g_p2;
int	g_s1;
int	g_s2;

void	ft_putchar(void)
{
	write(1, &g_p1, 1);
	write(1, &g_p2, 1);
	write(1, " ", 1);
	write(1, &g_s1, 1);
	write(1, &g_s2, 1);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
g_p1 = '0';
	while (g_p1 <= '9')
	{
	g_p2 = '0';
		while (g_p2 <= '8')
		{
		g_s1 = '0';
			while (g_s1 <= '9')
			{
			g_s2 = '0';
				while (g_s2 <= '9')
				{
					ft_putchar ();
					g_s2++;
				}	
			g_s1++;
			}	
		g_p2++;
		}
	g_p1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

