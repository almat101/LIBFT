/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:59:55 by amatta            #+#    #+#             */
/*   Updated: 2023/03/31 16:41:26 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *)s;
	while (*ps && n)
	{
		if (*ps == (unsigned char)c)
			return (ps);
		ps++;
		n--;
	}
	if (c == 0)
		return (ps);
	return (NULL);
}
int main()
{
	char *s = "pingulo";
	
	printf("%s",ft_memchr(s,'\0',5));
}
