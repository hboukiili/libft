/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:51:52 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/07 21:30:24 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	char	*s;
	char	*d;
	size_t	len;

	s = (char *)src;
	d = (char *)dst;
	len = ft_strlen(s);
	if (len + 1 < l)
	{
		ft_memcpy (d, s, len + 1);
	}
	else if (l != '\0')
	{
		ft_memcpy (d, s, l - 1);
		dst[l - 1] = '\0';
	}
	return (len);
}
//  int main()
// // {
// //      char s[20] = "Hamza";
// //      char d[20] = "boukili";
// //      size_t l = 32;
// //      ft_strlcpy(d,s,l);
// //      printf("%zu\n",ft_strlcpy(d,s,l));
// //      printf("%zu",strlcpy(d,s,l));
// // }
