/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:21:39 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/26 23:33:32 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strncmp

SYNOPSIS
	#include <string.h>

	int strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
	The  strcmp() function compares the two strings s1 and s2.
	The locale is not taken into account (for a locale-aware comparison,
	see strcoll(3)).
	It returns an integer less than, equal to, or greater than zero if
	s1 is found, respectively, to be less than, to match, or be greater
	than s2.
	The strncmp() function is similar, except it compares only the first
	(at most) n bytes of s1 and s2.

RETURN VALUE
	The strcmp() and strncmp() functions return an integer less than,
	equal to, or greater than zero if s1 (or the first n bytes thereof)
	is found, respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
