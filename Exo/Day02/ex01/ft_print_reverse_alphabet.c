/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printalphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:54:33 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/08 18:02:48 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c ,1);
}

int main()
	
{
	int 	i;
	
	i = 0;
		
	while(i<26)
		{
			ft_putchar('z'-i);
			i++;
		}
	ft_putchar('\n');
	return(0);
}

