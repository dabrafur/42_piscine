/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:27:55 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/03 18:10:50 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count_size;
	int	limit;

	limit = n;
	count_size = 0;
	while (count_size < limit && src[count_size] != '\0')
	{
		dest[count_size] = src[count_size];
		count_size++;
	}
	while (count_size < limit)
	{
		dest[count_size] = '\0';
		count_size++;
	}
	return (dest);
}

#include<stdio.h>
int   main(void)
{
        char    dest[10];
        char    *src;
        int             n;

        src = "Débora";
        n = 3;
        ft_strncpy(dest, src, n);
        printf("%s", dest);
        return (0);
}

