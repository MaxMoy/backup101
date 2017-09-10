/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 19:29:34 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/09 10:50:53 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)


{
	write(1, &c ,1);
}

void ft_is_negative(int n)

{
	if(n<0)
	{
	ft_putchar('N');
	ft_putchar('\n');
	}
	else
	{
	ft_putchar('P');
	ft_putchar('\n');
	}	
}

int main()

{
	ft_is_negative(-2);
	return(0);
}
