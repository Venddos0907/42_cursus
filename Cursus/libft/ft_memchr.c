/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:13 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 11:20:41 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t size)
{
    unsigned long int i;
    char *p;

    i = 0;
    while (i < size)
    {
        if (((unsigned char *)str)[i] == (unsigned char)c)
        {
            p = &((char*)str)[i];
            return (p);
        }
        i++;
    }
    return (0);
}