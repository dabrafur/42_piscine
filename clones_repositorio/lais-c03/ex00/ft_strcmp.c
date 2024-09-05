/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:15:06 by lleal-go          #+#    #+#             */
/*   Updated: 2024/09/04 17:50:09 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "laIs";
	char	s2[] = "lais";
	int	i;
	int	i2;


	i = ft_strcmp(s1, s2);
	i2 = strcmp(s1, s2);
	printf("%d\n", i);
	printf("%d\n", i2);

	return (0);
}

