/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazanjan <sazanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:08:51 by sazanjan          #+#    #+#             */
/*   Updated: 2025/07/21 16:35:21 by sazanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char	*to;
	const unsigned char	*from;

	if (!destination && !source)
		return (NULL);
	to = (unsigned char *)destination;
	from = (const unsigned char *)source;
	while (num--)
		*(to++) = *(from++);
	return (destination);
}

