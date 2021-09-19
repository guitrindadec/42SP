/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:49:32 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/08 21:49:29 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstrings(char const *str, char c)
{
	int		nstrings;
	int		control;

	nstrings = 0;
	control = 0;
	while (*str)
	{
		if (*str != c && control == 0)
		{
			control = 1;
			nstrings++;
		}
		else if (*str == c)
			control = 0;
		str++;
	}
	return (nstrings);
}

static int	ft_wordsize(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
		{
			return (i);
		}
		str++;
		i++;
	}
	return (i);
}

static char	**ft_tosplit(char const *s, char **split, char c)
{
	int		len;
	int		control;
	int		i;
	int		j;

	i = 0;
	j = 0;
	control = 0;
	while (s[i])
	{
		if (s[i] != c && control == 0)
		{
			len = ft_wordsize(s + i, c);
			split[j] = (char *) ft_calloc (sizeof(char), (len + 1));
			if (split[j] != NULL)
				ft_strlcpy (split[j], s + i, len + 1);
			control = 1;
			j++;
		}
		else if (s[i] == c)
			control = 0;
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nstrings;

	if (!s)
		return (0);
	nstrings = ft_countstrings(s, c);
	split = (char **)malloc(sizeof(char *) * (nstrings + 1));
	if (split == NULL)
		return (NULL);
	split = ft_tosplit (s, split, c);
	split[nstrings] = NULL;
	return (split);
}
