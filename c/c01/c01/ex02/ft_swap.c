/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:11:14 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/22 21:24:26 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("antes > x = %d e y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois > x = %d e y = %d\n", x, y);
	return (0);
}*/
