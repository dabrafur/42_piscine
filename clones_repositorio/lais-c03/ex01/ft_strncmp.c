/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:29:05 by lleal-go          #+#    #+#             */
/*   Updated: 2024/09/05 00:52:39 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s1[i] == s2[i]) && i < n -1)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "laIs";
	char	s2[] = "lais";
	int	i;
	int	n = 3;

	i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);

	return (0);
}

