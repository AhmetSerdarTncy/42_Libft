/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:48:09 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/07/20 15:49:07 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Başta ve sonda yer alan belirtilen karakterleri kaldırır
char * strtrim(char* str, const char* chars_to_trim) {
    if (str == NULL || chars_to_trim == NULL)
        return NULL;

    size_t len = strlen(str);
    size_t start = 0;
    size_t end = len - 1;

    // Başta yer alan karakterleri kaldır
    while (start < len && strchr(chars_to_trim, str[start]) != NULL)
        start++;

    // Sonda yer alan karakterleri kaldır
    while (end > start && strchr(chars_to_trim, str[end]) != NULL)
        end--;

    // Yeni bir diziyi başlangıç ve bitiş noktalarına göre oluştur
    size_t new_len = end - start + 1;
    memmove(str, str + start, new_len);
    str[new_len] = '\0';

    return str;
}

int main() {
    char text[] = "   Merhaba, dünya!   ahmet ";
    const char* chars_to_trim = " ahmet";
    printf("Önce: '%s'\n", text);
    strtrim(text, chars_to_trim);
    printf("Sonra: '%s'\n", text);

    return 0;
}