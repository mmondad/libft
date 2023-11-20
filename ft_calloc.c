/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:37:35 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/20 12:46:26 by mmondad          ###   ########.fr       */
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
/*
int main()
{
	char *ptr =  ft_calloc(1, SIZE_MAX - 13);
	if (ptr == NULL)
	{
		printf("(null)%%\n");
		return (1);
	}	
	//strcpy(ptr, "hello");
	//printf("or = %s\n", ptr);
	//printf("%s", ptr);
	char *ptr1 = ft_calloc(6, sizeof(char));
	//strcpy(ptr1, "hello");
	//printf("%s", ptr1);
	//i can use bzero in ln 24 _ 28

}
*/
