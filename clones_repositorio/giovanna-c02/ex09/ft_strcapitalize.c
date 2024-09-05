/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:24:34 by gdias-co          #+#    #+#             */
/*   Updated: 2024/09/03 16:30:57 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	capitalize_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 65 && str[i] < 90)
		{
			str[i] = (str[i] + 32);
		}
		if (capitalize_next)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			capitalize_next = 0;
		}
		if (!is_alphanumeric(str[i]))
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
int main()
{
	char texto[69] = "oi, eu tuDo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("\n------ Ex09 ft_strcapitalize----------\n");
	printf("Para capitalize deve retornar a string : %s\n",
	ft_strcapitalize(texto));
	printf("Para vazio deve retornar vazio : %s\n", ft_strcapitalize(""));
}
