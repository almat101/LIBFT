/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 09:50:27 by amatta            #+#    #+#             */
/*   Updated: 2023/03/30 10:39:35 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>

size_t	ft_strlcat(char *dst,const char *src, size_t dstsize)
{
		size_t	i;
		size_t	j;
		size_t  k;

		i = strlen(dst);
		k = strlen (dst);
		j = 0;
		while ((i < dstsize - 1) && src[j])
		{
			dst[i]=src[j];
			i++;
			j++;
		}
		if ( i < dstsize)
			dst[i] = '\0';
		return (k + strlen(src));
}

int main() {
    char dest[20] = "hello";
    const char *src = "worldworld";
    size_t destsize = sizeof(dest);
    size_t result;

    result = ft_strlcat(dest, src, destsize);
    printf("Result: %zu, Dest: %s\n", result, dest);

    return 0;
}
