/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:11:24 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:18:31 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
			break ;
		}
		i++;
	}
	return (result);
}
int main() {
    char str1[] = "GIOVANNA";
    char str2[] = "Giovanna!";
    char str3[] = "";

    printf("String 1 is uppercase: %d\n", ft_str_is_uppercase(str1));
    printf("String 2 is uppercase: %d\n", ft_str_is_uppercase(str2));
    printf("String 3 is uppercase: %d\n", ft_str_is_uppercase(str3));

    return 0;
}
