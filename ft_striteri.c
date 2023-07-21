/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:24:34 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/21 11:37:02 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// *s dizisinin her indeksini sırasıyla parametredeki fonksiyona parametre olarak gönderilir
 

// #include <stdio.h>

// void ft_iter(unsigned int i, char *str)
// {
// 	*str = ft_tolower(*str);
// }

// int main()
// {
// 	char str[] = "YigitHAN KAraBULut";
// 	ft_striteri(str,ft_iter);
// 	printf("%s",str);
// }
