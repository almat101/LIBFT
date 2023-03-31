/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:04:46 by amatta            #+#    #+#             */
/*   Updated: 2023/03/31 15:31:52 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	size_t	i;
	size_t	k;

	i = 0;
	k = ft_strlen(s);
	ps = (char *)s;
	while (*ps)
		ps++;
	while (i < k)
	{
		if (*ps == (unsigned char)c)
			return (ps);
		ps--;
		k--;
		if (k == i)
			return (NULL);
	}
	return (NULL);
}
