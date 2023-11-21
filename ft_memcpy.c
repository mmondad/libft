/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:18:30 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/20 20:47:31 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!s && !d)
		return (NULL);
	if (s == d)
		return (d);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int main()
{ 
	char *str = "hello";
	char *dst = "hello";dd
	char *ss = ft_memcpy(dst, str, 4);
	printf("%s", ss);
}
*/
