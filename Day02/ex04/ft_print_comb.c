/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:54:33 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/13 22:25:42 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void	ft_print(int a,int b,int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
	if(a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
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
