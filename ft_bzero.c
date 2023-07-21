/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:33:43 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/10 21:45:47 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int	main(void)
{
	char	str[] = "Ahmet Serdar";
	int	a = ft_strlen(str);

	ft_bzero (str, 2);	
	int	i 
	i = 0;
	while (i != a)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
*/
