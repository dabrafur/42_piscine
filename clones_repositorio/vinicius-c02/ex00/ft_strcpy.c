/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:13:23 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:08:00 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	count_char;

	count_char = 0;
	while (src[count_char] != '\0')
	{
		dest[count_char] = src[count_char];
		count_char++;
	}
	dest[count_char] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	dest[] = "ola";
	char	src[] = "tudo bem?";

	ft_strcpy(dest, src);
	printf("%s", dest);
	return(0);
}
