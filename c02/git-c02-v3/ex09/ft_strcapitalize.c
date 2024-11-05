/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:01:49 by deabraha          #+#    #+#             */
/*   Updated: 2024/09/03 21:11:40 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}

int	is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

int	is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]) == 1
			&& (i == 0 || (is_alpha(str[i - 1]) == 0
					&& is_numeric(str[i - 1]) == 0)))
			str[i] = str[i] - 32;
		else if (is_uppercase(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main()
{	
	int	i;
	char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	i = 0;
	ft_strcapitalize(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}*/
