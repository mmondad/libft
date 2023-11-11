/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:18:00 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/03 17:48:27 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	ft_memcpy(d, s, len);
	return (d);
}
/*
int main()
{
	char *src = "hello";
	char dst[20];
	char *str = memmove(dst, src, 5);
	char *str1 = ft_memmove(dst, src, 5);
	printf("memmove = %s\nft_memmove  = %s\n", str, str1);
}
*/
