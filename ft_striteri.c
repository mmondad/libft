/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:13:10 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 20:05:34 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void fun(unsigned int index, char *s)
{   
	if (index % 2 == 0)
		*s = (*s + 1);
	else
		*s = (*s - 1);
}

int main(void)
{
	char str[] = "abcdefgh";
	printf("str = %s\n", str);
	ft_striteri(str, fun);
	printf("after ed = %s", str);
	return (0);
}
*/
