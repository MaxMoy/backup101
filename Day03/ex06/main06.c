/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:16:53 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/14 16:52:52 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{

	char *string;
	string = "HelloHelloHello";
	printf("%d" , (ft_strlen(string)));
	return(0);
}
