/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:47:02 by sksioui           #+#    #+#             */
/*   Updated: 2025/09/02 12:47:05 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*r;

	size = max - min;
	if (size <= 0)
		return (0);
	r = malloc(sizeof(int) * size);
	if (!r)
		return (0);
	i = 0;
	while (i < size)
	{
		r[i] = min;
		i++;
		min++;
	}
	return (r);
}
