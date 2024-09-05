/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snicomed <snicomed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:56:17 by snicomed          #+#    #+#             */
/*   Updated: 2024/08/31 23:20:13 by snicomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h> 

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)

{
	char	a;

	a = 'a';
	while (a <= 'z')
	{	
		write(1, &a, 1);
		a++;
	}
}
