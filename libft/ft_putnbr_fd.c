/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:42:32 by renrodri          #+#    #+#             */
<<<<<<< HEAD:ft_putnbr_fd.c
/*   Updated: 2024/11/04 23:33:31 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:39:47 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putnbr_fd.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
<<<<<<< HEAD:ft_putnbr_fd.c
	long int	n_new;

	n_new = n;
	if (n_new < 0)
	{
		n_new *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n_new > 9)
		ft_putnbr_fd(n_new / 10, fd);
	ft_putchar_fd(n_new % 10 + '0', fd);
=======
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		ft_putchar(48 + n, fd);
	}
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putnbr_fd.c
}
