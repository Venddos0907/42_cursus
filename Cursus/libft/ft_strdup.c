/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:21:18 by mmetzger          #+#    #+#             */
/*   Updated: 2022/02/28 12:34:24 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*duplicate;

	length = ft_strlen(s1);
	CHECK_PTR(duplicate = ft_calloc(length + 1, sizeof(char)));
	ft_memcpy(duplicate, s1, length);
	duplicate[length] = '\0';
	return (duplicate);
}