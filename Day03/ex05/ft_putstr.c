/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:40:32 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/14 11:16:21 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
		while(str[i] !=  '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}