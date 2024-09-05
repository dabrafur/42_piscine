/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:52:57 by ytavares          #+#    #+#             */
/*   Updated: 2024/09/05 17:37:35 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_p;
	char	*str_p;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		to_find_p = to_find;
		str_p = str;
		while (*str_p != '\0' && *to_find_p != '\0' && *str_p == *to_find_p)
		{
			str_p++;
			to_find_p++;
		}
		if (*to_find_p == '\0')
			return (str);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[8] = "socorro";
	char	to_find[] = "co";
	char	*r;

	r = ft_strstr(str, to_find);
	printf("%s\n", r);
	return (0);
}
