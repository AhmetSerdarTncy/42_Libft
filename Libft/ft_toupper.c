/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:28:06 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/11 10:44:29 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if('z' >= c && c >= 'a')
		return(c -= 32);
	return(c);
}

#include <stdio.h>

int	main(void)
{
	printf("%c", ft_toupper('c'));
}