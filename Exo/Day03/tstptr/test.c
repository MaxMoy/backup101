/# **************************************************************************** #
/#                                                                              #
/#                                                         :::      ::::::::    #
/#    test                                               :+:      :+:    :+:    #
/#                                                     +:+ +:+         +:+      #
/#    By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+         #
/#                                                 +#+#+#+#+#+   +#+            #
/#    Created: 2017/09/09 16:42:33 by mmoyet            #+#    #+#              #
/*   Updated: 2017/09/09 16:52:18 by mmoyet           ###   ########.fr       */
/#                                                                              #
/# **************************************************************************** #

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

int		main()
{

int a;
int *ptr;

a = 3;
ptr = &a;

ft_putchar('0' + a);
ft_putchar('0' + *ptr);
}