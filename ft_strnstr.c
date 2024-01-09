/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:17:40 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/22 11:58:05 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	int				j;
	int				l;

	i = 0;
	l = ft_strlen(needle);
	if ((haystack == NULL && len == 0) || l == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			if (needle[j + 1] == '\0' && i + j < len)
				return ((char *)(haystack + i));
			else
				j ++;
		}
		i ++;
	}
	return (NULL);
}
