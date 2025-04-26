/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:42:20 by renrodri          #+#    #+#             */
<<<<<<< HEAD:ft_putendl_fd.c
/*   Updated: 2024/11/04 23:34:02 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:37:27 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putendl_fd.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
<<<<<<< HEAD:ft_putendl_fd.c
	write(fd, s, ft_strlen(s));
=======
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_putendl_fd.c
	write(fd, "\n", 1);
}
