/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazanjan <sazanjan@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:42:19 by szanjani          #+#    #+#             */
/*   Updated: 2025/07/15 16:31:32 by sazanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_len;
	size_t	space;
	size_t	i;

	dst_length = 0;
	src_len = 0;
	i = 0;
	space = 0;
	while (dst[dst_length] != '\0')
		dst_length++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_length >= size)
		return (size + src_len);
	else
		space = (size - dst_length -1);
	while (i < space && src[i] != '\0')
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_len);
}
