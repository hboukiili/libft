/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:51:52 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/16 23:44:48 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src1, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src1);
	if (size == 0)
		return (len);
	while (src1[i] && (i < size - 1))
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = ('\0');
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
