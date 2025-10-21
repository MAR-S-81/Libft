/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchesnea <mchesnea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:05:16 by mchesnea          #+#    #+#             */
/*   Updated: 2025/10/21 19:03:18 by mchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nb++;
		i++;
	}
	return (nb + 1);
}

char	*get_word(char const *s, int start, int end)
{
	return (ft_substr(s, start, end - start));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dest;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	s = ft_strtrim(s, &c);
	if (!s)
		return (NULL);
	if (!(dest = malloc(sizeof(char *) * (count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			dest[j] = get_word(s, start, i);
			start = i++;
			j++;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}
