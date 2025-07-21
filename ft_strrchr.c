/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazanjan <sazanjan@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:32:22 by szanjani          #+#    #+#             */
/*   Updated: 2025/07/18 16:06:05 by sazanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr( const char *s, int c)
{
	const char	*last;
	char		b;

	last = NULL;
	b = (char) c;
	while (*s != '\0')
	{
		if (*s == b)
			last = s;
		s++;
	}
	if (b == '\0')
		return ((char *)s);
	return ((char *)last);
}
