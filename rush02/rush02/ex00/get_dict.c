/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:01:28 by deabraha          #+#    #+#             */
/*   Updated: 2024/09/02 08:04:04 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

t_num	*read_dict(int fd, t_num *dict, int *count)
{
	int		i;
	int		j;
	int		total_size;
	char	dict_buf[BUFFER_SIZE];

	dict = malloc(sizeof(t_num) * BUFFER_SIZE);
	total_size = read(fd, dict_buf, BUFFER_SIZE);
	i = 0;
	*count = 0;
	while (i < total_size)
	{
		j = 0;
		while (dict_buf[i] >= '0' && dict_buf[i] <= '9')
		{
			dict[*count].num[j] = dict_buf[i];
			j++;
			i++;
		}
		while (dict_buf[i] == ' ' || dict_buf[i] == ':')
			i++;
		j = 0;
		while (dict_buf[i] != '\n' && dict_buf[i] != '\0')
		{
			dict[*count].lit[j] = dict_buf[i];
			j++;
			i++;
		}
		if (dict_buf[i] == '\n')
			i++;
		(*count)++;
	}
	return (dict);
}
