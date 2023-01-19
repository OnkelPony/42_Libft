/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:06:02 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/19 19:13:33 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    if (size == 0)
        return -1;

    size_t ret = strnlen(src, size);
    size_t len = (ret >= size) ? size - 1 : ret;
    memcpy(dst, src, len);
    dst[len] = '\0';
    return ret;
}
