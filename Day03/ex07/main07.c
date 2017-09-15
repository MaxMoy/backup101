/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoyet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:33:29 by mmoyet            #+#    #+#             */
/*   Updated: 2017/09/14 18:17:46 by mmoyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char string[] = "cimer";
	printf("%s", ft_strrev(string));
	return(0);
}
