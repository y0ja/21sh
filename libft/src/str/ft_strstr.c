/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:38:02 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/17 16:04:43 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const	char	*tmp1;
	const	char	*tmp2;

	if (!s1 || !s2)
		return (NULL);
	if (*s2 == 0)
		return ((char *)s1);
	while (*s1 != 0)
	{
		tmp1 = s1;
		tmp2 = s2;
		while (*tmp1 == *tmp2 && *tmp1 != 0 && *tmp2 != 0)
		{
			tmp1++;
			tmp2++;
		}
		if (*tmp2 == 0)
			return ((char *)s1);
		s1++;
	}
	return (0);
}
