/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:26:47 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/07 19:03:19 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lens;
	size_t	i;

	lens = ft_strlen(src);
	if (dstsize == 0)
		return (lens);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (lens);
}
/*
int main()
{
	char dst[1];
	char dst1[1];
	char *src = "hello";
	ft_strlcpy(dst1, src, sizeof(dst1));
	strlcpy(dst, src, sizeof(dst));
	printf("my = %s strlcpy = %s", dst1, dst);
	
}
*/
