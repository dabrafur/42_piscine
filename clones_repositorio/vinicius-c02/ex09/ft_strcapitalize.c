/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:20:19 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:26:06 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);

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

char	*ft_strlowcase(char *str)
{
	int	count_str;

	if (ft_strlen(str) <= 0)
		return (str);
	else
	{
		count_str = 0;
		while (str[count_str] != '\0')
		{	
			if (str[count_str] >= 65 && str[count_str] <= 90)
				str[count_str] = str[count_str] + 32;
			count_str++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	begin_word;

	count = 0;
	begin_word = 1;
	ft_strlowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
			begin_word = 0;
		else if ((str[count] >= 'a' && str[count] <= 'z') && begin_word == 1)
		{
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] = str[count] - 32;
			begin_word = 0;
		}
		else if (!(str[count] >= 'a' && str[count] <= 'z')
			&& !(str[count] >= '0' && str[count] <= '9'))
		{
			begin_word = 1;
		}
		count++;
	}
	return (str);
}

#include <unistd.h>
int     main()
{
        int     i;
        char    str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

        i = 0;
        ft_strcapitalize(str);
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

