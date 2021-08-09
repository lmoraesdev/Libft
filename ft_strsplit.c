/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:58:54 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/09 18:02:44 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_ptr_count(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	while (s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			nb++;
			while (si != c && s[i] != '\0')
				i++;
		}
	}
}

static void	pfree(char **ptr, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}
	free(ptr)
	ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	nb_ptr;
	size_t	len_ptr;
	size_t	i;

	if (!s)
		return (NULL);
	nb_ptr = ft_ptr_count(s, c);
	ptr = (char **)malloc((nb_ptr + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	while (i < nb_ptr)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			len_prt = 0;
			while (s[len_ptr] != c && s[len_ptr] != 0)
				len_ptr++;
			tab[i] = ft_substr(s, 0, len_ptr);
			if (tab[i] == NULL)
				pfree(tab, i);
		}
		s = s + len_ptr;
		i++;
	}
	tab[i] = NULL
	return (tab)
}
