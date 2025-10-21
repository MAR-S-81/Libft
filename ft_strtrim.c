/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchesnea <mchesnea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:53:39 by mchesnea          #+#    #+#             */
/*   Updated: 2025/10/21 11:58:06 by mchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_if_set(char const *s, char const *set, int t)
{
	int	i;
	int	j;

	i = 0;
	if (t == 0)
		j = 0;
	else
		j = ft_strlen(s) - 1;
	while (set[i])
	{
		if (set[i] == s[j])
		{
			if (t == 0)
				j++;
			else
				j--;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		last;
	int		i;
	char	*dest;

	start = check_if_set(s1, set, 0);
	last = check_if_set(s1, set, 1) + 1;
	i = 0;
	if (!set || !s1)
		return (NULL);
	if (start >= (int)ft_strlen(s1))
	{
		if (!(dest = malloc(1)))
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * (last - start + 1))))
		return (NULL);
	while (start < last)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
