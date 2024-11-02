/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:34:34 by retahri           #+#    #+#             */
/*   Updated: 2024/10/30 02:17:33 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (n > i)
	{
		ptr[i++] = 0;
	}
}
// void print_buffer(const char *label, const char *buffer, size_t size) {
//     printf("%s: ", label);
//     for (size_t i = 0; i < size; i++) {
//         printf("%c", buffer[i] == 0 ? '0' : buffer[i]);
//     }
//     printf("\n");
// }
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main() {
//     // Test Case 3: Null Pointer Case
//     // printf("ft_bzero - Null Pointer Case: ");
//     ft_bzero("abcd", 0);
//     // printf("No crash expected.\n");

// printf("bzero - Null Pointer Case: ");
// bzero(NULL, 5);
// printf("Undefined behavior, may crash.\n");

// Test Case 4: Full Buffer Case
// char str3[10] = "abcdefghi";
// ft_bzero(str3, 10);
// print_buffer("ft_bzero - Full Buffer Case", str3, 10);

// strcpy(str3, "abcdefghi");
// bzero(str3, 10);
// print_buffer("bzero - Full Buffer Case", str3, 10);

// // Test Case 5: Partial Buffer Case
// char str4[10] = "abcdefghij";
// ft_bzero(str4 + 3, 5);
// print_buffer("ft_bzero - Partial Buffer Case", str4, 10);

// strcpy(str4, "abcdefghij");
// bzero(str4 + 3, 5);
// print_buffer("bzero - Partial Buffer Case", str4, 10);

// // Test Case 6: Large Buffer Case
// char str5[100];
// memset(str5, 'a', 100);
// ft_bzero(str5, 100);
// print_buffer("ft_bzero - Large Buffer Case", str5, 100);

// memset(str5, 'a', 100);
// bzero(str5, 100);
// print_buffer("bzero - Large Buffer Case", str5, 100);

// // Test Case 7: Negative Size Case (Simulated with a large size)
// char str6[10] = "abcdefghi";
// printf("ft_bzero - Negative Size Case: ");
// ft_bzero(str6, (size_t)-1); // Behavior may be undefined; use caution
// print_buffer("Result (ft_bzero)", str6, 10);

// printf("bzero - Negative Size Case: ");
// bzero(str6, (size_t)-1); // Behavior may be undefined; use caution
// print_buffer("Result (bzero)", str6, 10);

//     return (0);
// }