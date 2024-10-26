/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:08:18 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/26 13:08:31 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char) c == '\0')
		return ((char *) &s[i]);
	while (i > 0)
	{
		if (s[i - 1] == (unsigned char) c)
			return ((char *) &s[i - 1]);
		i--;
	}
	return (NULL);
}
