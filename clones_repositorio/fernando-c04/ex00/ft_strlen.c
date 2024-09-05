/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:41:50 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/28 15:36:22 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Hello, World!!!!!!!";
	int	result;

	result = ft_strlen(str);
	printf("O tamanho da string %s é: %i", str, result);
	return (0);
}


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
