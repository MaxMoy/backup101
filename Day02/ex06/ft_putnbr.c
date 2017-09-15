/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 11:15:38 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/13 22:32:04 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{ 
	if(nb != -2147483648)
	{
		if(nb < 0)
		{
		ft_putchar('-');
			nb = nb * -1;
		}
		if(nb >= 10)
		{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		}
		else
		{
		ft_putchar('0' + nb);
		}
	}
	else
	{
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar('8');
	}
}
