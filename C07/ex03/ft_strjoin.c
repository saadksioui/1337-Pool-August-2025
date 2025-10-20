/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:49:09 by sksioui           #+#    #+#             */
/*   Updated: 2025/09/02 12:57:54 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	size_strs(char **strs, int size)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

int	ft_strcp(char *dest, char *src, int index)
{
	int	k;

	k = 0;
	while (src[k] != '\0')
	{
		dest[index] = src[k];
		k++;
		index++;
	}
	return (index);
}

void	create_str(char *arr, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = ft_strcp(arr, strs[i], j);
		if (i < size - 1)
			j = ft_strcp(arr, sep, j);
		i++;
	}
	arr[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length_strs;
	int		length_sep;
	char	*arr;

	if (size == 0)
	{
		arr = malloc(1);
		if (!arr)
			return (0);
		arr[0] = '\0';
		return (arr);
	}
	length_strs = size_strs(strs, size);
	length_sep = ft_strlen(sep) * (size - 1);
	arr = malloc(sizeof(char) * (length_strs + length_sep + 1));
	if (!arr)
		return (0);
	create_str(arr, strs, sep, size);
	return (arr);
}
