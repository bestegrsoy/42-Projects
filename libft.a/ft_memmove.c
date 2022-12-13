/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:21:14 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/13 15:21:40 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	return (dst);
}

/*int main()
{
	char dst[] = "Beste";
	char src[] = "Gursoy";
	
	ft_memmove(dst, src, 3);
	printf("%s", dst);
}*/