/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:11:28 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/15 04:39:41 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
		return (d);
	}
	return (ft_memcpy(d, s, len));
}

// int main()
// {
// 	char a[] = "youssef";
// 	printf("%s",ft_memmove(a + 2, a, 3));
// }