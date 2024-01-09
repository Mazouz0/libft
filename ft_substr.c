/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:01:57 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/22 13:00:27 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			slen;
	char			*arr;
	size_t			j;

	if (!s)
		return (NULL);
	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	while (j < len)
	{
		arr[j] = s[start + j];
		j ++;
	}
	arr[j] = '\0';
	return (arr);
}
