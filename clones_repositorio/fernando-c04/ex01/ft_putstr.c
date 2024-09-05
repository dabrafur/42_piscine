/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:55:28 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/28 15:41:18 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>
void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "Hello, World!";

	printf("A string bonita para teste é: %s\n", str);
	ft_putstr(str);
	return (0);
}
//Caro avaliador, não esquecer do <stdio.h>

void	ft_putstr(char *str)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (str[index] != '\0')
	{
		len++;
		index++;
	}
	write(1, str, len);
}
// fez dessa forma para saber a quantidade de bytes e poder imprimir no write