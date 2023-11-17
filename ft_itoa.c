/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:13:40 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/13 17:26:18 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(long nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
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
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nb > 0)
	{
		str[slen] = (nb % 10) + 48;
		nb /= 10;
		slen--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = len_int(nb);
	return (add_to(nb, len));
}
/*
int main()
{
	char *str = ft_itoa(0);
	printf("%s", str);
	free(str);
	return 0;
}

*/
