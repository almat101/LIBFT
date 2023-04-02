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
	c = (unsigned char)c;
	while (n && *ps != c)
	{
		ps++;
		n--;
	}
	if (n)
		return ((void *)ps);
	else
		return (NULL);
}
int main()
{
	char *s = "pingulo";
	
	printf("%p",ft_memchr(s,'n',5));
}
