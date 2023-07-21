/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:44:55 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/17 10:38:11 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	d;
	size_t	s;

	a = ft_strlen(dst);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (n <= d)
		return (n + s);
	while (src[i] && a < n - 1)
	{
		dst[a] = src[i];
		i++;
		a++;
	}
	dst[a] = '\0';
	return (d + s);
}

/*

int	main(void)
{
	char a[] = "Ahmet";
	char b[] = "Serdar";
	printf("%zu - %s",ft_strlcat(a, b, 10), a);
}

*/
