/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:51:54 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/23 14:22:25 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_double(char **av)
{
	int	i;

	i = 0;
	while (av[i] != NULL)
		i++;
	return (i);
}
