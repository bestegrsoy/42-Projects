/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:45 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/13 14:01:02 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*int main()
{
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('7'));
	printf("%d", ft_isalnum('.'));
}*/