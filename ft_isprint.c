/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:56:34 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/17 15:54:45 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isprint(12));
}
*/
