/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:13:32 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/26 18:22:42 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int a;
	a = 24;
	int *ptr1 = &a;
	int	**ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	printf("%d\n", a);
	ft_ultimate_ft(ptr9);
	printf("%d\n", a);
	return (0);
}
	