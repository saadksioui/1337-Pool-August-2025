/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 03:10:02 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/28 03:53:49 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime_find(int nb, int d)
{
	if (d * d > nb)
		return (1);
	if (nb % d == 0)
		return (0);
	return (ft_prime_find(nb, d + 1));
}

int	ft_is_prime(int nb)
{
	int	d;

	d = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	return (ft_prime_find(nb, d));
}
