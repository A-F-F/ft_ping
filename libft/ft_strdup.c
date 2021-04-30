/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:06:12 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 17:00:03 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	if (src)
		str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!src || !str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i += 1;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup_free(char **src)
{
	char	*dup;

	dup = ft_strdup(*src);
	ft_strdel(src);
	return (dup);
}
