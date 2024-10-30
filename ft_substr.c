/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:11:42 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/30 12:11:53 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	char			*temp;

	if (start >= ft_strlen(s))
		substr = malloc(1);
	else if (ft_strlen(s) <= len)
		substr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	temp = substr;
	while (len && (start <= ft_strlen(s)))
	{
		*substr = s[start];
		substr++;
		start++;
		len--;
	}
	*substr = '\0';
	substr = temp;
	return (substr);
}
