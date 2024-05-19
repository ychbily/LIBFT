/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:14:54 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/22 02:52:41 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	if (!dst && dstsize == 0)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while ((dstlen + i) < dstsize - 1 && src[i] != '\0' )
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (dstlen + srclen);
}
