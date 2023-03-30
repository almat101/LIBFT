/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmoveARR.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:30:43 by amatta            #+#    #+#             */
/*   Updated: 2023/03/29 17:22:46 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pd;
	const unsigned char	*ps;
	size_t				i;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else
	{
		while (len--)
			pd[len] = ps[len];
	}
	return (dst);
}
