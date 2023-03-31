/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:20:39 by amatta            #+#    #+#             */
/*   Updated: 2023/03/31 10:39:33 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char *ps;

	ps = (char *)s;
	while (*ps)
	{
		if (*ps ==(unsigned char)c)
			return (ps);
		ps++;
	}
	if (c == 0)
		return (ps);
	return (NULL);
}

int main()
{
	const char p[] = "pizza e fichi";
	printf( "%s", ft_strchr(p,32));
}
