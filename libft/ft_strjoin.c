/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:40:29 by renrodri          #+#    #+#             */
<<<<<<< HEAD:ft_strjoin.c
/*   Updated: 2024/11/04 11:08:40 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:36:24 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_strjoin.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_concat;
	char	*concat;
	char	*temp;

	size_concat = ft_strlen(s1) + ft_strlen(s2);
	concat = (char *)malloc((size_concat + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	concat[size_concat] = 0;
	temp = concat;
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (*s2)
	{
		*concat = *s2;
		concat++;
		s2++;
	}
	concat = temp;
	return (concat);
}
