/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:45:00 by bresanta          #+#    #+#             */
/*   Updated: 2024/09/03 19:17:21 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/bsd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = str_len(dest);
	src_len = str_len(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len - i);
}


int	main(void)
{
	char	*srcft = "Mossar";
	char	destft[20] = "Al-";

	char	*srcbsd = "Mossar";
	char	destbsd[20] = "Al-";

	int		lenft;
	int		lenbsd;

	lenft = ft_strlcat(destft, srcft, sizeof srcft);
	lenbsd = strlcat(destbsd, srcbsd, sizeof srcbsd);

	printf("ft : %s\n", destft);
	printf("bsd: %s\n", destbsd);
	return (0);
}

