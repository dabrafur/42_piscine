/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:53:32 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:17:30 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			result = 0;
			break ;
		}
		i++;
	}	
	return (result);
}

int main() {
    char str1[] = "helloworld";
    char str2[] = "";

    printf("String 1 is lowercase: %d\n", ft_str_is_lowercase(str1));
    printf("String 2 is lowercase: %d\n", ft_str_is_lowercase(str2));

    return 0;
}
