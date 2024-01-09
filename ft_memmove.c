/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:12:54 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/21 22:29:14 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str_dest, void *str_src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (str_src == str_dest)
		return (str_dest);
	if (!str_dest && !str_src)
		return (str_dest);
	dest = (unsigned char *)str_dest;
	src = (unsigned char *)str_src;
	if (dest <= src || dest > src + len)
	{
		while (len--)
			*dest++ = *src++;
	}
	else
	{
		while (len--)
			dest[len] = src[len];
	}
	return (str_dest);
}
