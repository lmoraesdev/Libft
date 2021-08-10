/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:58:54 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/09 23:01:41 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ptr_count(char const *s, char c);

static char	**free_tab(char **tab, size_t i)
{
	while ((int)i >= 0)
	{
		free(tab[i]);
		tab[i] = NULL;
		i--;
	}
	free(tab);
	tab = NULL;
	return (tab);
}

static void	mal_sub(char **tab, char const *s, char c, size_t nb_ptr)
{
	size_t	len_ptr;
	size_t	i;

	i = 0;
	while (i < nb_ptr)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			len_ptr = 0;
			while (s[len_ptr] != c && s[len_ptr] != 0)
				len_ptr++;
			tab[i] = ft_substr(s, 0, len_ptr);
			if (tab[i] == NULL)
				free_tab(tab, i);
			s = s + len_ptr;
			i++;
		}
	}
	tab[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_ptr;

	if (!s)
		return (NULL);
	nb_ptr = ft_ptr_count(s, c);
	tab = (char **)malloc(((sizeof(char *)) * (nb_ptr + 1)));
	if (!tab)
		return (NULL);
	mal_sub(tab, s, c, nb_ptr);
	return (tab);
}

static size_t	ft_ptr_count(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			nb++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (nb);
}
