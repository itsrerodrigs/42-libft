/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:41:24 by renrodri          #+#    #+#             */
<<<<<<< HEAD:ft_strmapi.c
/*   Updated: 2024/11/04 11:04:43 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:35:10 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762:.a fazer/ft_strmapi.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
