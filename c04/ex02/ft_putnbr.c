/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:31:20 by deabraha          #+#    #+#             */
/*   Updated: 2024/09/05 16:42:26 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, &nb, 11);
		return;
	}
	if (nb < -)
}

int	main(void)
{
	int	nb;
	
	nb = 42;
	ft_putnbr(nb);
	return (0);
}