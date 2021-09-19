/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:24:12 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:51:32 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first;
	int	last;

	first = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[first]) && s1[first])
		first++;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[last - 1]) && last)
		last--;
	return (ft_substr(s1, first, last - first));
}
