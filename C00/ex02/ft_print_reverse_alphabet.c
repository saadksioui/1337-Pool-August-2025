/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 20:41:28 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/15 20:43:24 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_letter;

	reverse_letter = 'z';
	while (reverse_letter >= 'a')
	{
		write(1, &reverse_letter, 1);
		reverse_letter--;
	}
}
