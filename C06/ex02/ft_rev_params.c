/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:35:20 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/26 15:39:22 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		argc -= 1;
		while (argc >= 1 && argv[argc])
		{
			ft_putstr(argv[argc]);
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
