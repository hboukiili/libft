/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:16:16 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/12 00:26:18 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		i;
	char	*m;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2);
	m = malloc ((n + 1) * sizeof (char));
	if (!m)
		return (NULL);
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		m[i++] = s2[j++];
	}
	m[i] = '\0';
	return (m);
}
// int main()
// {
//     char a[] = "hamza ";
//     char b[] = "boukili";
//     printf("%s",ft_strjoin(a,b));
// }