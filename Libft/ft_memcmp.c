/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:42:57 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/13 15:07:27 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char * a1;
	unsigned char * a2;
	size_t i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	
	while(i < n)
	{
		if(a2[i] != a1[i])
			return(a2[i] - a1[i]);
		i++;
	}
	return(0);
}

int	main(void)
{
	char a[] = "Bhmet";
	char b[] = "Ahmet";
	
	printf("%d", ft_memcmp(a, b, 3));
}