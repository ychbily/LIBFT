/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:24:10 by ychbily           #+#    #+#             */
/*   Updated: 2023/11/22 02:56:51 by ychbily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa_helper(int n, char *result, int len)
{
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		result[len] = '\0';
		len--;
		while (len > 0)
		{
			result[len] = n % 10 + '0';
			n /= 10;
			len--;
		}
	}
	if (n > 0)
	{
		while (len > 0)
		{
			result[--len] = n % 10 + '0';
			n /= 10;
		}
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	char	*result;

	len = 0;
	tmp = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		tmp = -n;
		len++;
	}
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	result = ft_calloc (len + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	itoa_helper(n, result, len);
	return (result);
}
