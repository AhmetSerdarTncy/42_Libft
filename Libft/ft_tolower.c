/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:43:44 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/11 10:48:29 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c += 32);
	return (c);
}

int	main(void)
{
	printf("%c", ft_tolower('C'));
}