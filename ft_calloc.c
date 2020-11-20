/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobouatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:57:20 by sobouatt          #+#    #+#             */
/*   Updated: 2020/11/20 18:57:23 by sobouatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!(ptr = malloc(count * size)))
		return (NULL);
	while (i < count * size)
	{
		((char*)ptr)[i] = 0;
		i++;
	}
	return (void *)(ptr);
}
