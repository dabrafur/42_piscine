/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:10:07 by gugomes-          #+#    #+#             */
/*   Updated: 2024/08/27 13:58:33 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while ((j < (size - 1)) && (src[j] != '\0'))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

int	main(void)
{
	char	dest[7];
	char	src[] = "Tilápia";
	char 	c;
	unsigned int i;
	
	i = 0;
	c = (ft_strlcpy(dest, src, i) + '0');
	write(1, &c, 1);
	write(1, "\n", 1);
	write(1, src, ft_strlcpy(dest, src, i));
	return (0);
}
