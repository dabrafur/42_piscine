/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:35:54 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/28 16:00:06 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	result;

	result = ft_atoi("---+--+1234ab567");
	printf("A string testada foi: ---+--+1234ab567\n");
	printf("O resultado é: %i\n", result);
	return (0);
}
//Caro avaliador, não se esquecer de colocar a <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	index;

	result = 0;
	sign = 1;
	index = 0;
	while (str[index] == '\n' || str[index] == ' '
		|| str[index] == '\t' || str[index] == '\v'
		|| str[index] == '\f' || str[index] == '\r')
			index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	return (result * sign);
}
