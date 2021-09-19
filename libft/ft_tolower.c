/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:20:13 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/26 23:33:45 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	tolower

SYNOPSIS
	#include <ctype.h>

	int tolower(int c);

DESCRIPTION
	This function convert uppercase letters to lowercase.

RETURN VALUE
	The value returned is that of the converted letter, or c if the
	conversion was not possible.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
