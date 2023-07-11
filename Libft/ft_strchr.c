/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:04:56 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/11 11:26:13 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int u = ft_strlen(s);
	
	while(u >= 0)
	{
		if(s[u] == c)
			return((char *)s);
		s++;
		u++;
	}
	return(NULL);
}

int	main(void)
{
	char a[] = "Ahmet";
	printf("%s", ft_strchr(a, 'h'));
}