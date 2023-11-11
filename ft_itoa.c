/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:30:41 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/11 17:35:09 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_int(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb >= 0)
	{
		nb /= 10;
		i++;
		if (nb == 0)
			break ;
	}
	return (i);
}

static char	*add_to(long nb, int len)
{
	char	*str;
	int		slen;

	slen = len - 1;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[slen] = (nb % 10) + 48;
		nb /= 10;
		slen--;
	}
	str[len] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = size_int(nb);
	return (add_to(nb, len));
}
/*
int main()
{
	char *str = ft_itoa();
	printf("%s", str);

	return 0;
}
*/
/*
	drna >= 0 o 3awdna zdna if nb == 0 break (ln 26) bach ila 3tana l user
	0 mn lwel ndiro lih blasto b i++ ila kanet > 9at3aa mghadich idkhel f  
	loop oma3ndna manndiro ila 3tana 0 mn lwel
*/