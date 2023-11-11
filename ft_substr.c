/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:32:01 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/07 19:05:14 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	il;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return ((char *)ft_calloc(sizeof(char), 1));
	j = 0;
	il = len;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (il--)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = 0;
	return (str);
}

/*
int main()
{
	char *s = "helloo";
	char *str = ft_substr(s, 10, 4);

	printf("%s\n", str);
	//printf("%s", s + 3);
	//printf("%d", str[5]);
	free(str);
}

*/
