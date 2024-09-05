/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:17:48 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/26 18:29:16 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a = 20;
	int	b = 6;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("divisao: %d\n resto: %d\n", div, mod);
	return (0);
}*/
