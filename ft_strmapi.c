/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:33:22 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/26 18:30:29 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	size_t	index;

	if (!s || !f)
		return (NULL);
	index = 0;
	arr = (char *)malloc(ft_strlen(s) + 1);
	if (!arr)
		return (NULL);
	while (index < ft_strlen(s))
	{
		arr[index] = f(index, s[index]);
		index ++;
	}
	arr[index] = '\0';
	return (arr);
}
