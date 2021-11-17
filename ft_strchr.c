/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:16:06 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/16 16:13:11 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	c = (unsigned char)c;
	i = 0;
	if (c == 0)
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char s[] = "hamza bobukili";
//     int n = 0;
//     printf("%s\n",ft_strchr(s,n));
//     // printf("%s",strchr(s,n));
// }
