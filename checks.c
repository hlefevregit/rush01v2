/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:07:38 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/23 16:33:08 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_arg(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		if (av[i][0] < '0' && av[i][0] > '9')
			return (0);
		printf("tab[%i] = %s\n", i, av[i]);
		i++;
	}
	return (1);
}

int	check_sum_col(t_bord bord)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if ((ft_atoi(bord.tab[i]) + ft_atoi(bord.tab[i + 4])) > 5)
			return (0);
		if ((ft_atoi(bord.tab[i]) + ft_atoi(bord.tab[i + 4])) < 3)
			return (0);
		i++;
	}
	return (1);
}

int	check_sum_raw(t_bord bord)
{
	int	i;

	i = 8;
	while (i <= 11)
	{
		if ((ft_atoi(bord.tab[i]) + ft_atoi(bord.tab[i + 4])) > 5)
			return (0);
		if ((ft_atoi(bord.tab[i]) + ft_atoi(bord.tab[i + 4])) < 3)
			return (0);
		i++;
	}
	return (1);
}

int	check_good_value(t_bord bord)
{
	int	i;

	i = 0;
	while (i <= 15)
	{
		if (bord.tab[i][0] < '1' || bord.tab[i][0] > '4')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_plate_is_doable(t_bord bord)
{
	printf("len of tab : %d\n", ft_strlen_double(bord.tab));
	if (ft_strlen_double(bord.tab) != 16)
		return (ft_error("Number of args not good\n"));
	if (check_good_value(bord) == 0)
		return (ft_error("Value not good\n"));
	if (check_sum_col(bord) == 0)
		return (ft_error("Sum col not good\n"));
	if (check_sum_raw(bord) == 0)
		return (ft_error("Sum raw not good\n"));
	return (1);
}
