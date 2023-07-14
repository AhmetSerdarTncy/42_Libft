/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:19:20 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/12 15:29:44 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
	int i = ft_strlen(s);

	while(i >= 0)
	{
		if((char)c == s[i])
			return((char *)(s + i));
		i--;
	}
	return(NULL);
}

int	main(void)
{
	char a[] = "Ahmet";
	printf("%s", ft_strrchr(a, 'm'));
}