/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:37:40 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:17:31 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_lowercase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] <= 96 || str[count_str] >= 123)
				return (0);
			count_str++;
		}
	}
	return (1);
}
#include <unistd.h>

int   main(void)
{
        char    i;
        char    *str;

        str = "";
        i = (ft_str_is_lowercase(str) + '0');
        write(1, &i, 1);
        write(1, &"\n", 1);
}
