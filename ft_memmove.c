/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:00 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/26 14:22:24 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pnt_src;
	unsigned char	*pnt_dest;

	pnt_src = (unsigned char *)src;
	pnt_dest = (unsigned char *)dest;
	if (!pnt_src && !pnt_dest)
		return (NULL);
	else if (dest < src)
		return (ft_memcpy(dest, src, n));
	else if (n > 0)
		while (n--)
			pnt_dest[n] = pnt_src[n];
	return (dest);
}
