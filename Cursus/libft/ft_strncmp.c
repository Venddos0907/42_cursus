/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetzger <mmetzger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:37 by mmetzger          #+#    #+#             */
/*   Updated: 2022/03/02 11:25:24 by mmetzger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *first, const char *second, size_t lenght)
{
    size_t i;

    i = 0;
    if (lenght == 0)
        return(0);
    while (i + 1 < lenght && (first[i] == second[i]) && (first[i]) && (second[i]))
        i++;
    return((unsigned char)first[i] - (unsigned char)second[i]);
}