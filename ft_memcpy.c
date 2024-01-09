/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:22:15 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/21 13:00:10 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str_dest, const void *str_src, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	if (!str_dest && !str_src)
		return (NULL);
	if (str_dest == str_src)
		return (str_dest);
	dest = (char *)str_dest;
	src = (char *)str_src;
	i = 0;
	while (n--)
	{
		dest[i] = src[i];
		i ++;
	}
	return (str_dest);
}
