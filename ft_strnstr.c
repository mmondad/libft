/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:45:44 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 17:45:05 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	i = 0;
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j])
		{
			if (h[i + j] == n[j])
				j++;
			else
				break ;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char *str = strnstr("hello simo", "simo", 10);
	char *str1 = ft_strnstr("hello simo", "simo", 10);
	printf("bot = %s\nmyf = %s", str, str1);
	
}
*/
