/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:50:20 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:16:46 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}

int	main()
{
	char	str1[] = "1234a";
	char	str2[] = "1234";
	ft_str_is_numeric(str1);
	ft_str_is_numeric(str2);
	printf("Deu ruim: %d \n", ft_str_is_numeric(str1));
	printf("Deu bom: %d", ft_str_is_numeric(str2));
	return (0);
}
