/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:23:01 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:47:53 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	atoi

SYNOPSIS
	#include <stdlib.h>

	int atoi(const char *nptr);

DESCRIPTION
	The atoi() function converts the initial portion of the string pointed
	to by nptr to int.
	The behavior is the same as strtol(nptr, NULL, 10);
	except that atoi() does not detect errors.

RETURN VALUE
	The converted value.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	ret;

	i = 0;
	ret = 0;
	s = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		ret = (ret * 10) + (nptr[i] - 48);
		i++;
	}
	return (s * ret);
}
