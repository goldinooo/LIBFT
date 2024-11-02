/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:19:30 by retahri           #+#    #+#             */
/*   Updated: 2024/11/02 17:00:10 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (ptr_dst > ptr_src) // a b CDED = 4 , a , c 0x100 0x101 0x102
		while (len > 0)
		{
			len--;
			ptr_dst[len] = ptr_src[len];
		}
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
// #include <string.h>
// int main()
// {
//     // Test overlapping case
//     char str[] = "abcdef";
// 	char str2[] = "abcdef";
//     printf("Before: %s\n", str);

//    // Move 4 characters ("abcd") two positions to the right
//     ft_memmove(str + 2, str, 4);
//     printf("dyali:  %s\n", str);
// 	memmove(str2 + 2, str2, 4);
//     printf("dyalhum:  %s\n", str);

//     return (0);
// }