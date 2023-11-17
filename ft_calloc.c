/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:37:35 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 14:47:14 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*point;
	size_t	i;

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
/*
int main()
{
	char *ptr = calloc(6, sizeof(char));
	strcpy(ptr, "hello");
	printf("or = %s\n", ptr);
	char *ptr1 = ft_calloc(6, sizeof(char));
	strcpy(ptr1, "hello");
	printf("%s", ptr1);
	//i can use bzero in ln 24 _ 28

}
*/
