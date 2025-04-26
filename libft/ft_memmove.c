/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:00 by renrodri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/05 02:18:14 by renrodri         ###   ########.fr       */
=======
/*   Updated: 2024/11/02 16:58:22 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (!ptr_src && !ptr_dest)
	{
		return (NULL);
	}
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	if (n > 0)
	{
		while (n--)
		{
			ptr_dest[n] = ptr_src[n];
		}
	}
	return (dest);
}
