/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:20:34 by tada-sil          #+#    #+#             */
/*   Updated: 2024/09/05 02:14:56 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	var1;
	int	var2;

	var1 = 5;
	var2 = 2;
	a = &var1;
	b = &var2;
	printf("%d %d\n", *a, *b);
	ft_swap(a, b);
	printf("%d " "%d", *a, *b);
	return (0);
}
