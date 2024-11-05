/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:40:56 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/04 23:30:43 by renrodri         ###   ########.fr       */
=======
/*   By: rerodrigs <rerodrigs@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:40:56 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/02 16:36:48 by rerodrigs        ###   ########.fr       */
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_string(char c, char charset)
{
	if (charset == c)
		return (0);
	return (1);
}

int	ft_strlen_s(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && in_string(str[i], charset))
		i++;
	return (i);
}

int	count_strings(char const *str, char charset)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !in_string(str[i], charset))
			i++;
		if (str[i] != '\0')
			counter++;
		while (str[i] != '\0' && in_string(str[i], charset))
			i++;
	}
	return (counter);
}

char	*word_allocate(char const *str, char charset)
{
	int		len_word;
	char	*word;
	int		i;

	i = 0;
	len_word = ft_strlen_s(str, charset);
	word = (char *)malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[len_word] = 0;
	while (str[i] != '\0' && in_string(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

<<<<<<< HEAD
char	**ft_split(char const *s, char c)
=======
char	**ft_split(char const *str, char charset)
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
{
	char	**list_str;
	int		number_str;
	int		g;

	g = 0;
<<<<<<< HEAD
	number_str = count_strings(s, c);
=======
	number_str = count_strings(str, charset);
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
	list_str = (char **)malloc((number_str + 1) * sizeof(char *));
	if (!list_str)
		return (NULL);
	list_str[number_str] = 0;
<<<<<<< HEAD
	while (*s != '\0')
	{
		while (*s != '\0' && !in_string(*s, c))
			s++;
		if (*s != '\0')
		{
			list_str[g] = word_allocate(s, c);
			g++;
		}
		while (*s != '\0' && in_string(*s, c))
			s++;
=======
	while (*str != '\0')
	{
		while (*str != '\0' && !in_string(*str, charset))
			str++;
		if (*str != '\0')
		{
			list_str[g] = word_allocate(str, charset);
			g++;
		}
		while (*str != '\0' && in_string(*str, charset))
			str++;
>>>>>>> 6c035a63291b40512985262e716efc9f18d16762
	}
	return (list_str);
}
