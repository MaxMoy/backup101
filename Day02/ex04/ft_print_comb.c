/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:54:33 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/10 17:51:16 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	ft_print(char a, char b, char c)
{
	ft_putchar(
	ft_putchar
	ft_putchar
}
void		ft_print_comb(void)
{
	int p;
	int m;
	int d;

	while (p <= 9)
	{
		while (m <= 9)
		{
			while (d <= 9)
			{
				if (p < m && m < d)
				{
					ft_putchar('0' + p);
					ft_putchar('0' + m);
					ft_putchar('0' + d);
					if (p != 7)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				d++;
			}
			d = 0;
			m++;
		}
		m = 0;
		p++;
	}
}
