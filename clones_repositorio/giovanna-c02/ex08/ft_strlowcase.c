/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:23:48 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:26:40 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 65 && str[i] < 90)
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

int main() {
    char str[] = "HELLO WORLD!";
    printf("Original string: %s\n", str);
    ft_strlowcase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
