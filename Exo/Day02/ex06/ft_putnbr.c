/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 11:15:38 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/10 12:24:11 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c ,1);
}

void	ft_putnbr(int nb)
{
	ft_putchar('0' + nb);
}

int main()
{
	ft_putnbr(44448);
	return(0);
}
