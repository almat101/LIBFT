/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <amatta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:14:48 by amatta            #+#    #+#             */
/*   Updated: 2023/04/03 16:05:14 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	unsigned const char	*ps;

	if (!dest && !src)
		return (dest);
	pd = dest;
	ps = src;
	while (n--)
		*pd++ = *ps++;
	return (dest);
}
