/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:29 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 18:12:17 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = ((char *)s1)[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = ((char *)s2)[j];
		j++;
	}
	str[i + j] = 0;
	return (str);
}

/*
int main()
{
	char const *s = NULL;
	char const *ss = "hello";
	char *str = ft_strjoin(s, ss);
	printf("%s\n", str);
	return (0);
}
*/
