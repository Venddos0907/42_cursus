/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:43 by mmetzger          #+#    #+#             */
/*   Updated: 2022/02/28 12:40:15 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	int		current;
	char	*last;

	index = 0;
	last = NULL;
	while (1)
	{
		current = s[index];
		if (current == c)
			last = (char *)(s + index);
		if (current == '\0')
			break ;
		index++;
	}
	return (last);
}