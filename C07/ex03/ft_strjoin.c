/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 13:34:54 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/31 14:07:10 by sksioui          ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		length_strs;
	int		length_sep;
	char	*arr;

	length_strs = size_strs(strs, size);
	length_sep = ft_strlen(sep) * (size - 1);
	arr = malloc(sizeof(char) * (length_strs + length_sep + 1));
	if (!arr)
		return (0);
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
	return (arr);
}
