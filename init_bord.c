/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:34 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/23 16:22:38 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void    init_matrix(t_bord game)
{
	int  i;

	i = 0;
	while (i < 16)
	{
        game.matrix.space[i] = "0";
        printf("space[%i] = %s\n", i, game.matrix.space[i]);
	    i++;
	}
}
