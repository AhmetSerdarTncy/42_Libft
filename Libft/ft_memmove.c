/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:32:38 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/10 23:31:47 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if ((size_t)dst - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
				i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*

#include <stdio.h>

int	main(void)
{
	char a[] = "Ahmet";
	char b[] = "Serdar";
	printf("%s", ft_memmove(a, b, 4));
}
*/
