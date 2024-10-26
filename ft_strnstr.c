/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:22:37 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/26 13:25:38 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!(*little))
		return ((char *) big);
	while (i <= len && len >= 0 && big[i] != '\0')
	{
		if (i + ft_strlen(little) > len)
			return (NULL);
		if (big[i] == little[0])
			if (ft_strncmp(&big[i], &little[0], ft_strlen(little)) == 0
				&& (ft_strlen(little) + i) <= len)
				return ((char *)&big[i]);
		i++;
	}
	return (0);
}
