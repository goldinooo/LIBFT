/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retahri <retahri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:52:53 by retahri           #+#    #+#             */
/*   Updated: 2024/11/02 18:40:25 by retahri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static char new_str(const char *str, const char *delete)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str[i] && delete[j])
	{
		ft_strchr
	}
	
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *copy;
	size_t i;
	size_t j;
	size_t idx;
	
	i = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
		}
		if (s1[i] != set[j])
		{
			copy[idx++] = s1[i++];
		}
		j++;
	}
	return (copy);
}
