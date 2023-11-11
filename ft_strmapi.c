/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:35:57 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/10 20:50:36 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char fun(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (c + 1);
	return (c - 1);
}

int main(void)
{
	char *str = NULL;
	char *strm = ft_strmapi(str, fun);
	printf("str = %s\n", str);
	printf("strm = %s", strm);
}
*/