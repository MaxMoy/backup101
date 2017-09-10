
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:54:33 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/08 20:51:02 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c ,1);
}

void  ft_print_numbers(void)
{
	int 	i;
	
	i = 0;
		
	while(i < 10)
		{
			ft_putchar('0'+i);
			i++;
		}
}

int main()
{
	ft_print_numbers();
	return(0);
}
