/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:00:37 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/07 11:18:42 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*buffer1;
	char			*buffer2;

	i = 0;
	buffer1 = (char *)src;
	buffer2 = dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		buffer2[i] = buffer1[i];
		i++;
	}
	return (dst);
}
