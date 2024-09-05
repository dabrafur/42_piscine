/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:15:23 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/09/04 10:20:58 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	if (argc > 0)
	{
		len = 0;
		while (argv[0][len])
			len++;
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
}
