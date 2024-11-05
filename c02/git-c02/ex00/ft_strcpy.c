/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:18:23 by deabraha          #+#    #+#             */
/*   Updated: 2024/09/03 12:07:48 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
//main para rodar a função ft_strcpy

/*int	main(void)
{
	char	src[] = "teste oi";
	char	dest[] = "ola"; 

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/

// outra forma de tentar resolver - não finalizada
/*char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count += 1;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "Nome";
	char	src[] = "Débora";

	printf("%s", ft_strcpy(dest, src));
}
*/