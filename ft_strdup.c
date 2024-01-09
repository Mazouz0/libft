/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:11:44 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/22 12:48:23 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	size_t	l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	p = (char *)malloc(l + 1);
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i ++;
	}
	p[i] = '\0';
	return (p);
}
