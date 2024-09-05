/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:44:25 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:13:18 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
#include <stdio.h>
int main() {
    char str1[] = "GiovannaLinda";
    char str3[] = "";

    printf("String 1 is alphabetic: %d\n", ft_str_is_alpha(str1));
    printf("String 3 is alphabetic: %d\n", ft_str_is_alpha(str3));

    return 0;
}
