/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:53:38 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/10 23:52:31 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);

#endif
