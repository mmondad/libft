/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:41:27 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/21 18:49:06 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*copy(char *s, char *tab, int i, int j)
{
	int	d;

	d = 0;
	while (i <= j)
	{
		tab[d] = s[i];
		i++;
		d++;
	}
	tab[d] = '\0';
	return (tab);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		d;
	char	*str;

	i = 0;
	j = 0;
	d = 0;
	if (!s1)
		return (0);
	if (!set)
		set = ft_strdup("");
	while (s1[i] && chek_set((char *)set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && chek_set((char *)set, s1[j]) == 1)
		j--;
	if (j == -1)
		j = ft_strlen((char *)s1);
	str = malloc(j - i + 2);
	if (str == 0)
		return (0);
	str = copy((char *)s1, str, i, j);
	return (str);
}
