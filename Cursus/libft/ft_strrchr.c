/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:43 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 11:26:08 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int x)
{
    int i;
    i = ft_strlen((char*)str);
    while (i >= 0)
    {
        if (str[i] == (char)x)
        {
            return((char*)&(str)[i]);
        }
        i--;
    }
    return(0);
}