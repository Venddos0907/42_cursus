/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:34:05 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 15:27:24 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1;
    size_t len2;
    char *s3;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    s3 = malloc(sizeof(char) * (len1 + len2));
    
    while(s1[i] != '\0')
    {
        s3[i++] = s1[j++];
    }
    j = 0;
    while(s2[j] != '\0')
    {
            s3[i++] = s2[j++];
    }
    s3[i] = '\0';
    return (s3);
}