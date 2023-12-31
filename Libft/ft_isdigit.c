/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:09:00 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/10 21:48:05 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>

int main()
{
    printf("%d", ft_isdigit('a'));  
}
*/
