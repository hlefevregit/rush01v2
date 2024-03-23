/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:38:02 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/23 16:28:09 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# define DEBUG (printf("DEBUG"))

typedef struct s_matrix
{
	char	*space[16];
}		t_matrix;

typedef struct s_bord
{
	char	**tab;

	t_matrix	matrix;
}		t_bord;

/***************** RUSH01 ****************/

void    init_matrix(t_bord game);
void	play_game(t_bord game);
void	free_game_tab(char **tab);
void	print_4s(t_bord game, int index);
void	print_matrix(t_bord game);

int		check_arg(char **av);
int		check_plate_is_doable(t_bord bord);
int		check_sum_col(t_bord bord);
int		check_sum_raw(t_bord bord);
int		check_good_value(t_bord bord);
int		ft_error(char *str);
int		check_for4s(t_bord game, int i);

/*****************************************/

/***************** LIBFT *****************/

int		ft_atoi(const char *str);
int		ft_strlen_double(char **av);

size_t	ft_strlen(const char *str);

char	**ft_split(const char *s, char c);

void	ft_putstr(char *str);
void	ft_putchar(char c);

/*****************************************/

#endif