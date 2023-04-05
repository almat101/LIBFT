/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:36:52 by amatta            #+#    #+#             */
/*   Updated: 2023/04/05 17:31:04 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ps1;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
			start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start;
	ps1 = ft_substr(s1, start, len + 1);
	return (ps1);
}
