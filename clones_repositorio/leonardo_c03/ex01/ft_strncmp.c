/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebricio <lebricio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:56:30 by lebricio          #+#    #+#             */
/*   Updated: 2024/08/22 20:43:25 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && s1[c] && s2[c])
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	if (c < n)
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	return (0);
}

#include <stdio.h>

int     main()
{
        int i = ft_strncmp("abcde", "abcdE", 5);
        printf("%i", i);
        return (0);
}

