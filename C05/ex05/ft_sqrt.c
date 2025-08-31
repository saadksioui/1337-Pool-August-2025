/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 03:04:34 by sksioui           #+#    #+#             */
/*   Updated: 2025/08/28 03:09:16 by sksioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_cal(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (ft_sqrt_cal(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	return (ft_sqrt_cal(nb, i));
}
