/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:23:18 by mohmazou          #+#    #+#             */
/*   Updated: 2023/11/26 17:10:32 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_len(long long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		if (n == 0)
			len++;
		else if (n <= 0)
		{
			n *= -1;
			len++;
		}
	}
	while (n > 0)
	{
		len ++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*arr;
	size_t		len;
	int			sign;
	long long	num;

	sign = 1;
	num = (long int)n;
	len = n_len(num);
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		sign *= -1;
	}
	while (len--)
	{
		arr[len] = num % 10 + '0';
		num = num / 10;
		if (sign < 0 && len == 0)
			arr[len] = '-';
	}
	arr[n_len(n)] = '\0';
	return (arr);
}
