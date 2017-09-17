/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 22:37:55 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/17 15:14:39 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_result(int i, int j, int k, int l)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar(' ');
	ft_putchar('0' + k);
	ft_putchar('0' + l);
	if (i != 9 || j != 8 || k != 9 || l != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_count(int m, int c, int d, int u)
{
	while (m <= 9)
	{
		while (c <= 9)
		{
			while (d <= 9)
			{
				while (u <= 9)
				{
					if (m < d || c < u)
					{
						ft_result(m, c, d, u);
					}
					u++;
				}
				d++;
				u = 0;
			}
			c++;
			d = 0;
		}
		m++;
		c = 0;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	ft_count(a, b, c, d);
}
