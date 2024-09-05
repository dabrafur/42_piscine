/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassem <cassem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:12:27 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/25 20:56:51 by cassem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int	*check_clues(char **argv);
int	solve(int **grid, int row, int col);
int	is_valid(int **table, int row, int col, int num);

#endif
