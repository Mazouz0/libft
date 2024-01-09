/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:25:13 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/26 16:48:47 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			nb++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nb);
}

char	*ft_mystrdup(const char *s, char c)
{
	int		lw;
	char	*str;
	int		i;

	i = 0;
	lw = 0;
	while (s[lw] && s[lw] != c)
		lw++;
	str = (char *)malloc(lw + 1);
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_myfree(char **r, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

static const char	*skip_c(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		index;
	char	*tmp;

	index = 0;
	if (!s)
		return (NULL);
	r = (char **)malloc((sizeof(char *) * (ft_count_words(s, c) + 1)));
	if (!r)
		return (NULL);
	while (*s)
	{
		s = skip_c(s, c);
		if (*s != '\0')
		{
			tmp = ft_mystrdup(s, c);
			if (!tmp)
				return (ft_myfree(r, index));
			r[index++] = tmp;
		}
		while (*s && *s != c)
			s++;
	}
	r[index] = 0;
	return (r);
}
