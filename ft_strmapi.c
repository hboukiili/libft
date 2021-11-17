/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:58:07 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/17 01:47:43 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char str)
{
	(void)i;
	str -= 32;
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*m;
	int		l;
	char	*x;

	if (!s || !f)
		return (NULL);
	i = 0;
	x = (char *)s;
	l = ft_strlen(s);
	m = malloc(l + 1);
	if (!m)
		return (NULL);
	while (s[i])
	{
		m[i] = f(i, x[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}

int main()
{
	char *h = ft_strmapi("hamza", f);
	printf("%s", h);
}