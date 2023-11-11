/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:18:30 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/03 17:48:17 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;
	int				j;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (n == 0)
		return (d);
	if (!s && !d)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && i < n)
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = 0;
	return (d);
}
/*
int main()
{ 
	char *str = "hello";
	char dst[12];
	ft_memcpy(dst, str, 4);
	printf("%s", dst);
}
*/
