/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:26:01 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/23 16:48:59 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_matrix(t_bord game)
{
	int	i;

	i = 0;
	while (i <= 15)
	{
		printf("i value : %i\n", i);
		ft_putchar(game.matrix.space[i][0]);
		ft_putchar(' ');
		/*if ((i + 1) % 4 == 0)
			ft_putchar('\n');*/
		i++;
	}
}