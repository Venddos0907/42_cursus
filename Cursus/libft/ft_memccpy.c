/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:18 by mmetzger          #+#    #+#             */
/*   Updated: 2022/02/28 11:09:24 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	chr;

	chr = c;
	index = 0;
	while (index < n)
	{
		if ((((UCHAR *)dst)[index] = ((UCHAR *)src)[index]) == chr)
			return (dst + index + 1);
		index++;
	}
	return (NULL);
}