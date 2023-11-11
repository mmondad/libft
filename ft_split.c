/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:43:57 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 17:34:03 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static char	*ft_n_strdup(const char *s1, char c)
{
	int		i;
	char	*cpy;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	cpy = malloc(len + 1);
	if (cpy == 0)
		return (0);
	i = 0;
	while (s1[i] && !check_sep(s1[i], c))
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

static int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], c))
			i++;
		if (str[i] != 0)
			count++;
		while (str[i] && !check_sep(str[i], c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		count;

	if (s == NULL)
		return (NULL);
	i = 0;
	count = count_words((char *)s, c);
	str = malloc((count + 1) * sizeof (char *));
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s != 0)
		{
			str[i] = ft_n_strdup(s, c);
			i++;
		}
		while (*s && !check_sep(*s, c))
			s++;
	}
	str[i] = 0;
	return (str);
}
/*
int main(void)
{
	char *s = NULL;
	char **str = ft_split(s, ' ');
}
*/
