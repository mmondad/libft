/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:37:35 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/21 18:18:41 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*point;
	size_t	i;

	if (count && (SIZE_MAX / count < size))
		return (NULL);
	point = malloc(count * size);
	if (point == 0)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		point[i] = '\0';
		i++;
	}
	return (point);
}
