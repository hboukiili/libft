/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:29:15 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/07 21:32:59 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*x2;
	size_t			i;

	x = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (x[i] != '\0' && x2[i] != '\0' && x[i] == x2[i] && i < n - 1)
	{
		i++;
	}
	return (x[i] - x2[i]);
}

// int main()
// {
// 	printf("%d\n",ft_strncmp("hamza","HHHHHH",7));
// 	printf("%d\n",strncmp("hamza","HHHHH",7));
// }
