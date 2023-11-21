/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:48:21 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/20 20:48:51 by mmondad          ###   ########.fr       */
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
	test
}
*/
