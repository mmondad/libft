/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:53:43 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/07 19:02:57 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	lens;
	size_t	lend;
	size_t	i;

	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (lend >= dstsize || dstsize == 0)
		return (lens + dstsize);
	i = 0;
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = 0;
	return (lend + lens);
}
/*
int main()
{
	char dst[20] = "hello";
	char *src = "simo";
	ft_strlcat(dst, src, sizeof(dst));
	printf("%s", dst);
}
*/
