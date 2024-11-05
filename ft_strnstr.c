/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:22:37 by renrodri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/04 11:02:00 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:52:31 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
<<<<<<< HEAD
	size_t	i;
=======
	size_t		i;
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762

	i = 0;
	if (!(*s2))
	{
		return ((char *) s1);
<<<<<<< HEAD
=======
	}
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
	while (i < len && s1[i] != '\0')
	{
		if (i + ft_strlen(s2) > len)
		{
			return (NULL);
		}
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			{
				return ((char *)&s1[i]);
			}
		}
		i++;
	}
	return (NULL);
}
