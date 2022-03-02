/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:24 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 11:22:56 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memset(void *pointer, int value, size_t count)
{
    unsigned char *dst = pointer;

    while (count > 0)
    {
        *dst = value;
        dst ++;
        count --;
    }
    return (pointer);
}