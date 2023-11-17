/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:48:21 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/13 12:30:01 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*point;
	unsigned char	t;
	size_t			i;

	i = 0;
	t = (unsigned char)c;
	point = (unsigned char *)b;
	while (i < len)
	{
		point[i] = t;
		i++;
	}
	return (point);
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
