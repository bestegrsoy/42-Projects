/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:27:47 by bgursoy           #+#    #+#             */
/*   Updated: 2022/12/15 17:59:56 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	len_n;
	
	len_n = ft_strlen(needle);
	if (len_n == 0)
		return ((char *) haystack);
	if (len == 0)
		return ((char *) NULL);
	i = 0;
	while ( i <= (len - len_n) && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, len_n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return ((char *) NULL);
}

/*int main()
{
	char *haystack = "beste gursoy42kocaeli";
	char *needle = "42";

	printf("%s", ft_strnstr(haystack, needle, 14));
}*/