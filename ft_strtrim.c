/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:36:52 by amatta            #+#    #+#             */
/*   Updated: 2023/04/05 12:52:20 by amatta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	lset;

	s1len = strlen(s1);
	lset = strlen(set);
	while (*s1)
	{
		if (

}
