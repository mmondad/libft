/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:48:21 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/03 18:24:29 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	t;
	size_t			i;

	i = 0;
	t = (unsigned char)c;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = t;
		i++;
	}
	return ((void *)str);
}
/*
int main()
{
	char ptr[] = "hello";
	char ptr1[] = "hello";
	char *str = memset(ptr, 'a', 3);
	char *str1 = ft_memset(ptr1, 'a', 3);
	printf("bot = %s\n myf = %s", str, str1);
}
*/
