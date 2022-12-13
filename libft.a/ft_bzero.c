/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:56:49 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/13 15:37:57 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int main()
{
	int	i;
	char str[] = "bestegursoy";
	i = ft_strlen(str);
	ft_bzero(str, 6);
	write(1, &str, i);
	return 0;
}*/