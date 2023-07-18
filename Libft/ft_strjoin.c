/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:02:57 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/18 15:13:28 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		b;
	int		len;
	int		c;
	int		i;
	char	*ptr;

	i = -1;
	b = -1;
	c = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len > b)
	{
		ptr = (char *)malloc(sizeof(char) * (len + 1));
		while (s1[++b])
			ptr[++i] = s1[b];
		while (s2[++c])
			ptr[++i] = s2[c];
		ptr[++i] = '\0';
		return (ptr);
	}
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	char a[] = "Ahmet";
	char b[] = "Serdar";

	printf("%s", ft_strjoin(a, b));
}
*/