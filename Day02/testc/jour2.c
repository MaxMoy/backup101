/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 13:26:10 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/08 14:25:45 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
int ft_nputchar(char c, int n)
{
	int i;
	
	i = 0;
		while (i < n)
		{
			ft_putchar(c);
			i=i+1;
		}
		return(0);
}

int main()

{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return(0);
}
