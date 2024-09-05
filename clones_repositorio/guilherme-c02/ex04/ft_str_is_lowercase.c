/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:07:52 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 13:38:02 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (('a' > *str) || (*str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char	i;
	char	str[] = "aaaaaaaaaa";

	i = (ft_str_is_lowercase(str) + '0');
	write(1, &i, 1);
}
