/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobouatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:07:53 by sobouatt          #+#    #+#             */
/*   Updated: 2020/11/20 19:08:40 by sobouatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*special_case(void)
{
	char *str;

	if (!(str = malloc(sizeof(char))))
		return (NULL);
	str[0] = 0;
	return (str);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (special_case());
	i = 0;
	j = start;
	while (s[start] && i < len)
		i++;
	if (!(str = malloc(i * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (s[j] && i < len)
	{
		str[i] = s[j + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
