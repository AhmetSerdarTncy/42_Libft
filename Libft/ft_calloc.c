/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:50:58 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/17 10:28:11 by ahtuncay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}

/*

int main()
{
	 int *ptr = ft_calloc(5, sizeof(int));
    if (ptr)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", ptr[i]);  // Default initialized to 0
        }
        printf("\n");
        free(ptr);
    }
    return 0;
}
*/
