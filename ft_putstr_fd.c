/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:00:22 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/30 11:37:24 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;

	if (fd < 0)
		return ;
	if (s == NULL)
		return ;
	index = 0;
	while (index < ft_strlen(s))
		write(fd, &s[index ++], 1);
}
