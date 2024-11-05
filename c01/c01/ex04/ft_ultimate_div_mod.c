/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:26:28 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/22 21:23:08 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*# include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = (*a / *b);
	*b = (*a % *b);
	*a = temp;
}
/*
int	main(void)
{
	int a = 20;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("divisão: %d\n", a);
	printf("resto: %d\n", b);
	return (0);
}*/
