/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:40:38 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/10 23:28:07 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>

int main()
{
    int a;
    a = ft_isalnum(':');
    printf("%d", a);
}

*/
