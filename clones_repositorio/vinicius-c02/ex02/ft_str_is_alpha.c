/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:10:38 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:14:01 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
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

int	ft_str_is_alpha(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (1);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{
			if (str[count_str] <= 64 || str[count_str] >= 123)
				return (0);
			else if (str[count_str] >= 91 && str[count_str] <= 96)
				return (0);
			count_str++;
		}
	}
	return (1);
}

#include <stdio.h>
int   main(void)
{
        char    str[] = "";

        printf("%d", ft_str_is_alpha(str));
        return (0);
}
