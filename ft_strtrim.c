/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobouatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:29:27 by sobouatt          #+#    #+#             */
/*   Updated: 2020/11/18 19:01:51 by sobouatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		checkset(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && checkset(set, s1[start]))
		start++;
	while (s1[end])
		end++;
	end--;
	while (checkset(set, s1[end]))
		end--;
	end++;
	if ((end - start) < 2)
		return (ft_substr(s1, start, 2));
	return (ft_substr(s1, start, (end - start)));
	if (!(str = malloc((end - start) * sizeof(char) + 1)))
		return (NULL);
}
