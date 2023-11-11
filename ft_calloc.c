/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:37:35 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 19:59:39 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(count * size);
	if (str == 0)
		return (NULL);
	i = 0;
	while (i < count * size) // i can use ft_bzero
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
int main()
{
	char *ptr = calloc(6, sizeof(char));
	strcpy(ptr, "hello");
	printf("%s\n", ptr);
	char *ptr1 = ft_calloc(6, sizeof(char));
	strcpy(ptr1, "hello");
	printf("%s", ptr1);

}
*/
