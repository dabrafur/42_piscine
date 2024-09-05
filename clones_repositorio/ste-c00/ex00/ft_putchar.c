/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:11:29 by snicomed          #+#    #+#             */
/*   Updated: 2024/09/01 13:12:35 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main( void)
{
	char	*botafogo;
	char	meu_caractere = 't';

	botafogo = &meu_caractere;
	ft_putchar(*botafogo);
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
