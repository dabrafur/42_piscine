/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:07:52 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 13:33:21 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (((*str > 'z') || (*str < 'a' ))
			&& (('Z' < *str) || ('A' > *str)))
			return (0);
		str++;
	}
	return (1);
}

int	main()
{
	char	i;
	char	str[] = "hfng4unaau";

	i = (ft_str_is_alpha(str) + '0');
	write(1, &i, 1);
}
