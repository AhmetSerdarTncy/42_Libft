/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:59 by ykarabul          #+#    #+#             */
/*   Updated: 2023/07/20 16:52:16 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	char c = 'A';
	//int fd = open("/Users/ahtuncay/Desktop/fak.txt", O_CREAT | O_RDWR, 0777);
	int fd = open("/Users/ahtuncay/Desktop/ak.txt", O_CREAT | O_RDWR | O_TRUNC, 0777); // O_APPEND -> Üzerine ekler !!
	ft_putchar_fd(c, fd);                                                              // O_TRUNC -> Bulunan değeri siler baştan yazar!!
	printf("%d",fd);
	// ft_putchar_fd(c, df);
	// printf("%d",df);
}
