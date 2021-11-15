/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboukili <hboukili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:03:16 by hboukili          #+#    #+#             */
/*   Updated: 2021/11/07 17:58:09 by hboukili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// int main()
// {
//     printf("%c\n",ft_tolower('X'));
//     printf("%c\n",tolower('X'));
//     printf("%c\n",ft_tolower('3'));
//     printf("%c\n",tolower('3'));  
//     printf("%c\n",ft_tolower('n'));
//     printf("%c\n",tolower('n'));
// }
