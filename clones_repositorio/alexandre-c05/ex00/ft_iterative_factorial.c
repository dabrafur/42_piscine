/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:29:00 by alexanfe          #+#    #+#             */
/*   Updated: 2024/09/04 16:04:18 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	value = 1;
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	return (value);
}
