/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:45:44 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 14:41:12 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p_h;
	char	*p_n;
	size_t	j;

	p_h = (char *)haystack;
	p_n = (char *)needle;
	if (!p_h && !len)
		return (NULL);
	if (p_n[0] == '\0')
		return (p_h);
	while (*p_h && len)
	{
		j = 0;
		while (p_h[j] == p_n[j] && j < len && p_h[j])
			j++;
		if (!p_n[j])
			return (p_h);
		len--;
		p_h++;
	}
	return (0);
}
/*
int main()
{
	char *str = strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	char *str1 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("bot = %s\nmyf = %s", str, str1);
	
}
*/
