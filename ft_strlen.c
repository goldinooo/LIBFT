/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:50:39 by retahri           #+#    #+#             */
/*   Updated: 2024/10/29 05:20:23 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str) //read only
{
	size_t i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	// printf("%lu\n", strlen("abcde"));
// 	// printf("%lu\n", ft_strlen("abcde"));
// 	// // printf("%lu\n", strlen(0));
// 	// printf("%lu\n", ft_strlen(0));
// 	// printf("%lu\n", strlen(NULL));
// 	printf("%lu\n", ft_strlen(NULL));
// }