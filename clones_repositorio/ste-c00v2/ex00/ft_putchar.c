/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snicomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:11:29 by snicomed          #+#    #+#             */
/*   Updated: 2024/08/28 12:21:12 by snicomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

/*int	main( void)
{
	char	*botafogo;
	char	meu_caractere = 'o';

	botafogo = &meu_caractere;
	ft_putchar(botafogo);
	return (0);
}*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
