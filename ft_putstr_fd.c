/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:17:33 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/20 15:47:11 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	int i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

/*
int main()
{
	char *str = "Ahmet serdar";
	int fd = open("fak.txt", O_CREAT | O_RDWR | O_APPEND, 0777);
	ft_putstr_fd(str, fd);
}
*/