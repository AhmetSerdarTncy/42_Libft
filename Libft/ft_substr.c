/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:02:32 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/17 20:58:40 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		a;
	char		*final;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[start + i])
			i++;
		final = (char *)malloc(sizeof(char) * i + i);
		if (!final)
			return (NULL);
		a = 0;
		while (a < i)
		{
			final[a] = s[start + a];
			a++;
		}
		final[a] = '\0';
		return (final);
	}
	return (NULL);
}

/*

int	main(void)
{
	char a[] = "Ahmet Serdar";
	printf("%s", ft_substr(a, 4, 3));
}

*/