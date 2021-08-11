/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:45:44 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/11 19:40:57 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_my(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_string;
	size_t			i;
	size_t			slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (slen > start)
		i = ft_my(ft_strlen(s + start), len);
	else
		return (ft_strdup(""));
	s_string = malloc(sizeof(char) * i + 1);
	if (!s_string)
		return (NULL);
	ft_strlcpy(s_string, &s[start], len + 1);
	return (s_string);
}
