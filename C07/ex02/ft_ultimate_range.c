/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:47:44 by sksioui           #+#    #+#             */
/*   Updated: 2025/09/02 13:09:57 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*r;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	r = malloc(sizeof(int) * size);
	if (!r)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		r[i] = min;
		i++;
		min++;
	}
	*range = r;
	return (size);
}
