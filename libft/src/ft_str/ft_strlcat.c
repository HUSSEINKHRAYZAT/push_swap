/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhrayza <hkhrayza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:37:13 by hkhrayza          #+#    #+#             */
/*   Updated: 2024/07/20 18:37:13 by hkhrayza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	char	*psrc;

	psrc = (char *)src;
	a = 0;
	while (*dst && a < size)
	{
		dst++;
		a++;
	}
	if (a == size)
		return (a + ft_strlen(src));
	b = 0;
	while (psrc[b])
	{
		if (b < size - a - 1)
			*dst++ = psrc[b];
		b++;
	}
	*dst = 0;
	return (a + b);
}
