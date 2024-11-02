/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:19:59 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 07:21:23 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     // char str[] = "Hello";
//     // printf("Before memset: %s\n", str);
//     // memset(str, 'B', 0);  // This is valid - does nothing
//     // printf("After memset: %s\n", str);

//     char str2[] = "Hello";
//     printf("\nBefore memset: %s\n", str2);
//     ft_memset(NULL, 'a', 3);
//     printf("After memset: %s\n", str2);

//     return (0);
// }
