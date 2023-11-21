/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:18:00 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/20 20:47:16 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s)
		return (d);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	return (ft_memcpy(d, s, len));
}
/*
int main()
{
	char *src = "hello";  
	char *dst = "hello";
	char *str = ft_memmove(dst, src, 5);
	//char *str1 = ft_memmove(dst, src, 5);
	printf("memmove = %s", str);
}
*/
