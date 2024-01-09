/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:53:18 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/21 23:00:28 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	len = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (len);
	if (size < i)
		return (size + len);
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest[i + j] = '\0';
	return (len + i);
}
