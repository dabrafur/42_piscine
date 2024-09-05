/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:07:52 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 13:45:49 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((31 > *str) || (*str > 126))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char	i;
	char	str[] = "/n";
	i = (ft_str_is_printable(str) + '0');
	write(1, &i, 1);
}
