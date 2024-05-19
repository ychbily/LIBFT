/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:18:49 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/22 02:53:15 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenstr;
	char	*str;

	if (s == NULL)
		return (NULL);
	lenstr = ft_strlen(s);
	if (lenstr <= start)
		return (ft_strdup(""));
	if (len > lenstr - start)
		len = lenstr - start;
	str = malloc (len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
