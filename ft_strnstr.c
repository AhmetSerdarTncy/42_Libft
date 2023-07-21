/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:28:14 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/18 15:24:13 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (!haystack)
		return (NULL);
	if (!n_len || haystack == needle)
		return ((char *)haystack);
	while (((char *)(haystack))[i] != '\0' && i < len)
	{
		j = 0;
		while (((char *)(haystack))[i + j] && needle[j] &&
		(((char *)(haystack))[i + j] == needle[j] && i + j < len))
			j++;
		if (j == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	char a = '\0';
	char b[] = "Ser";
 	printf("%s", ft_strnstr(&a, b, 15));
}

*/
