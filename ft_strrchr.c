/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:00:53 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/05 18:00:12 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	n = ft_strlen(s);
	str = (char *)s + n;
	while (n--)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}
