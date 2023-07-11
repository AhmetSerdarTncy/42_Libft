/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:54:20 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/07 23:54:21 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)s)[counter] = (unsigned char)c;
		counter++;
	}
	return ((unsigned char *)s);
}

// #include <stdio.h>

// int	main()
// {
// 	char a[] = "deneme";
// 	printf("%s", ft_memset(a, 'b', 1));
// }
