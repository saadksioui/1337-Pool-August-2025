/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 03:43:10 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/28 03:54:49 by sksioui          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
