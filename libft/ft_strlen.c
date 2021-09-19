/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:33:49 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/27 22:57:25 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strlen

SYNOPSIS
	#include <string.h>

	size_t strlen(const char *s);

DESCRIPTION
	The strlen() function calculates the length of the string
	pointed to by s, excluding the terminating null byte ('\0').
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
