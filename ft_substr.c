/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:26:16 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/13 03:08:01 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (i < len && s[i])
		i++;
	ptr = malloc (i + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (j < i)
		ptr[j++] = s[start++];
	ptr[j] = '\0';
	return (ptr);
}

// int	main()
// {
// 	char a[] = "hamza boukili HHHHHH";
// 	int b = 3;
// 	size_t n= 10;
// 	printf("%s",ft_substr(a,b,n));
// }