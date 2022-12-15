/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:57:17 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/12 18:01:16 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*tmp;

	tmp = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *tmp && (char)c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
