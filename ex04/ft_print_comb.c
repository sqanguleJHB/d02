/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:15:26 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/17 17:55:02 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = -1;
	while (n1 <= 9)
	{
		n2 = ++n1;
		while (n2 <= 9)
		{
			n3 = ++n2 + 1;
			while (n3 <= 9)
			{
				ft_putchar(n1 + '0');
				ft_putchar(n2 + '0');
				ft_putchar(n3++ + '0');
				if (n1 != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
