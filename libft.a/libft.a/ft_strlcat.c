/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:45:56 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/16 12:14:26 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;
	unsigned int	d;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
		dst[c++] = src [d++];
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*int main()
{
	char	dst[] = "Beste";
	char	src[] = "Gursoy";

	printf ("%p %p", dst, src);
	printf ("%lu\n", ft_strlcat(dst, src, 30));
	printf ("%s\n", dst);
	printf ("%lu\n", ft_strlcat(dst, src, 5));
	printf ("%s", dst);
}*/
