/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:51:33 by deabraha          #+#    #+#             */
/*   Updated: 2024/09/02 15:14:39 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	i;
	char	*str;

	str = "ola";
	i = (ft_str_is_lowercase(str) + '0');
	write(1, &i, 1);
	write(1, &"\n", 1);
}*/
