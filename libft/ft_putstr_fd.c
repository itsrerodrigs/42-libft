/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:42:05 by renrodri          #+#    #+#             */
<<<<<<< HEAD:ft_putstr_fd.c
/*   Updated: 2024/11/04 23:33:48 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/10/31 15:10:55 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putstr_fd.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
<<<<<<< HEAD:ft_putstr_fd.c
	write(fd, s, ft_strlen(s));
=======
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putstr_fd.c
}
