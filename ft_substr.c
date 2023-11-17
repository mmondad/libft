/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:32:01 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/17 16:23:31 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return ((char *)ft_calloc(sizeof(char), 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	j = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (j < len)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int main()
{
	char s[] = "helloo";
	//char *str = ft_substr("hola", 0, 18446744073709551615);
	//unsigned long ul = ULONG_MAX;
	//ftt_putnbr_fd(ULONG_MAX - 1, 2);
	if (ULONG_MAX > 1844674407370955169)
		printf("yes");
	//printf ("%lu\n%lu", ul, ULONG_MAX);
	//printf("%s\n", str);
	//printf("%s", s + 3);
	//printf("%d", str[5]);
	//free(str);
}
*/
