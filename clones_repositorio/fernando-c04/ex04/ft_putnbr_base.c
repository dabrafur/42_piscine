/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:26:48 by fruan-ba          #+#    #+#             */
/*   Updated: 2024/08/28 16:09:47 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		has_duplicates(char *base);

int		is_valid_base(char *base);

int	main(void)
{
	ft_putnbr_base(1200, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(1200, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(1200, "01");
	return (0);
}

int	is_valid_base(char *base)
{
	int	lenght;
	int	index;

	lenght = 0;
	index = 0;
	while (base[lenght] != '\0')
		lenght++;
	if (lenght < 2)
		return (0);
	if (has_duplicates(base))
		return (0);
	while (base[index] != '\0')
	{
		if (base[index] == '-' || base[index] == '+')
			return (0);
		index++;
	}
	return (1);
}

int	has_duplicates(char *base)
{
	int	index;
	int	second_index;

	index = 0;
	second_index = 0;
	while (base[index] != '\0')
	{
		second_index = index + 1;
		while (base[second_index] != '\0')
		{
			if (base[index] == base[second_index])
				return (1);
			second_index++;
		}
		index++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	index;
	int	second_index;

	index = 0;
	second_index = 0;
	while (base[index] != '\0')
		index++;
	if (is_valid_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		if (nbr >= index)
		{
			ft_putnbr_base(nbr / index, base);
		}
		write(1, &base[nbr % index], 1);
	}
	else
		return ;
}
