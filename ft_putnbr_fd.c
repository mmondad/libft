/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:21:15 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/13 15:15:01 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", ft_strlen("-2147483648"));
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((char)n + 48, fd);
	else if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*
int main(void)
{
	int fd = open ("file.txt", O_CREAT | O_RDONLY | O_WRONLY);
	printf("fd = %d\n", fd);
	ft_putnbr_fd(2002, fd);
}
*/
