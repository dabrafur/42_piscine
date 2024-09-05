/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:06:10 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/03 19:13:55 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*ptr_start;

	i = 0;
	ptr_start = str;
	if (*str == '\0' && to_find[0] == '\0')
		return (ptr_start);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			ptr_start = str;
			i = 0;
			while (to_find[i] != '\0' && str[i] != '\0')
			{
				if (str[i] != to_find[i])
					break ;
				i++;
			}
		}
		if (to_find[i] == '\0')
			return (ptr_start);
		str++;
	}
	return (NULL);
}


int	main(void)
{
	char	*str1 = "Hello todos World";
	char	*str2 = "todos";

	printf("Standard: %s\n", strstr(str1, str2));
	printf("Mine: %s\n", ft_strstr(str1, str2));
	return (0);
}
