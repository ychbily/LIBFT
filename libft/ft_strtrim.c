/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:15:38 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/22 02:53:12 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	const char		*start;
	const char		*end;
	size_t			trimmed_len;
	char			*trimmed;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = s1;
	end = s1 + len - 1;
	while (start <= end && ft_strchr(set, *start) != NULL)
		start++;
	while (end >= start && ft_strchr(set, *end) != NULL)
		end--;
	if (end < start)
		return (ft_strdup(""));
	trimmed_len = (end - start) + 1;
	trimmed = malloc(trimmed_len + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, start, trimmed_len + 1);
	return (trimmed);
}
