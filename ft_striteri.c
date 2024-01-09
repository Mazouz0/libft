/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:25:40 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/26 18:36:01 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (index < ft_strlen(s))
	{
		f(index, &s[index]);
		index ++;
	}
}
