/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:07:52 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 13:56:13 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char str)
{
	if ((str < 'A' || str > 'Z') && (str < 'a' || str > 'z'))
		return (0);
	return (1);
}

int	is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	is_uppercase(char str)
{
	if (str < 'A' || str > 'Z')
		return (0);
	return (1);
}

int	is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_lowercase(str[index]) == 1
			&& (index == 0 || (is_alpha(str[index - 1]) == 0
					&& is_numeric(str[index - 1]) == 0)))
			str[index] = str[index] - 32;
		else if (is_uppercase(str[index]) == 1)
			str[index] = str[index] + 32;
		index = index + 1;
	}
	return (str);
}

int	main()
{	
	int	i;
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
       
	i = 0;
	ft_strcapitalize(str);
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
