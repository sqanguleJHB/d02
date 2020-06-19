/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:07:15 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/19 14:16:35 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = -1;
	while (++n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar((n1 / 10) + '0');
			ft_putchar((n1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((n2 / 10) + '0');
			ft_putchar((n2++ % 10) + '0');
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}
