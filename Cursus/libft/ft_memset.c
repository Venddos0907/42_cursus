/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by mmetzger          #+#    #+#             */
/*   Updated: 2022/02/27 12:42:01 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t index;

	index = 0;
	while (index < len)
		((unsigned char *)b)[index++] = c;
	return (b);
}