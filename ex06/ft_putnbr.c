/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:19:48 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/19 14:16:11 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		copy_of_nb;
	int		divider;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == INT_MIN)
		{
			nb += 2000000000;
			ft_putchar('2');
		}
		nb = -nb;
	}
	copy_of_nb = nb;
	divider = 1;
	while (copy_of_nb /= 10)
		divider *= 10;
	while (divider)
	{
		ft_putchar((nb / divider) + '0');
		nb %= divider;
		divider /= 10;
	}
}
