/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:41:27 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 18:14:52 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char const *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	size_str(char const *s1, char const *set)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i] && check_sep(set, s1[i]))
		i++;
	while (s1[i++])
		count++;
	while (check_sep(set, s1[i - 2]))
	{
		i--;
		count--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;
	size_t	j;

	if (s1 == NULL)
		return (0);
	len = 0;
	i = 0;
	j = size_str(s1, set);
	str = malloc(size_str(s1, set) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] && check_sep(set, s1[i]))
		i++;
	while (j--)
	{
		str[len] = s1[i];
		len++;
		i++;
	}
	str[len] = 0;
	return (str);
}
/*
int main()
{
	char *i = ft_strtrim(",,,aa,ahello aaaa   ", " ,");
	printf("%s\n", i);
}
*/
