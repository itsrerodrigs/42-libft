/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:08:36 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/23 10:12:29 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'
			|| c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}