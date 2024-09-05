/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:06:05 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:26:07 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = (str[i] -32);
		}
		i++;
	}
	return (str);
}

int main() {
    char str[] = "hello, world!";
    printf("Original string: %s\n", str);
    ft_strupcase(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
