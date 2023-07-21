/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:43:44 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/17 10:40:36 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c += 32);
	return (c);
}

/*
 
int	main(void)
{
	printf("%c", ft_tolower('C'));
}

*/
