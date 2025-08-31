/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:52:41 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/20 17:59:36 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	hex_digit(int n)
{
	if (n < 10)
		return (n + '0');
	else
		return ('a' + (n - 10));
}

void	ft_print_hex(unsigned char c)
{
	int		i;
	char	hex[2];

	i = 0;
	if (c == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (c > 0)
	{
		hex[i] = hex_digit(c % 16);
		c = c / 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &hex[i], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			if (c < 16)
				write(1, "0", 1);
			ft_print_hex(c);
		}
		i++;
	}
}
