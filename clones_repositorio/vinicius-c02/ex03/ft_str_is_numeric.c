/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:56:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:16:02 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);
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

int	ft_str_is_numeric(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] <= 47 || str[count_str] >= 58)
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
        char    str [] = "aaa";

        i = (ft_str_is_numeric(str) + '0');
        write(1, &i, 1);
        write(1, &"\n", 1);
}
