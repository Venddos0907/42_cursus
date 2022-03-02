/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:34:01 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 12:37:40 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static size_t	get_split_n(const char *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			n++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	strs_i;
	char	**strs;

	if (!s)
		return (NULL);
	strs = ft_calloc(get_split_n(s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	strs_i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i = 0;
			while (*s != c && *s && ++i)
				s++;
			strs[strs_i] = ft_calloc(i + 1, sizeof(char));
			ft_strlcpy(strs[strs_i++], s - i, i + 1);
		}
	}
	strs[strs_i] = NULL;
	return (strs);
}