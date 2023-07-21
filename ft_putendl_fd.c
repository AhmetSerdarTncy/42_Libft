/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:06:41 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/21 11:50:01 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

#include <fcntl.h>

int	main()
{
	int	i = open("/Users/ahtuncay/Desktop/Masaüstü/akjshdlasjd.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("AhmetSerdar", i);
}