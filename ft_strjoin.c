/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:06 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/28 17:29:59 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_return;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str_return = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str_return)
		return (NULL);
	while (s1[i])
		str_return[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str_return[j++] = s2[i++];
	str_return[j] = '\0';
	return (str_return);
}
