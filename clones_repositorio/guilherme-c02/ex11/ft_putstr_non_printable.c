/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:11:43 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 14:03:02 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			output[3];
	const char		hex_chars[] = "0123456789abcdef";
	unsigned char	c;

	while (*str)
	{
		c = (unsigned char)*str;
		if (c < 32 || c > 126)
		{
			output[0] = '\\';
			output[1] = hex_chars[(c >> 4) & 0x0F];
			output[2] = hex_chars[c & 0x0F];
			write(1, output, 3);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	str[] = "Oi\nvoce esta bem?";

	ft_putstr_non_printable(str);
}
