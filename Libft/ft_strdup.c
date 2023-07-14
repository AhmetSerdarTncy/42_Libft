/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:49:03 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/14 11:00:09 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char * ft_strdup(const	char *s1)
{
	char *ptr;
	size_t i;
	size_t len;
	
	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if(!ptr)
		return(NULL);
	while(s1[i])	
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

int	main()
{
	char a[] = "Ahmet";

	printf("%s", ft_strdup(a));
}