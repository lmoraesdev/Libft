/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:19:26 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/11 14:53:08 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
* @brief check if the character passed is alphabetic.
*
* @param c This is the character to be checked.
* @return 0 to false or 1 to true
*/
int		ft_isalpha(int c);

/**
 * @brief check if the character passed is numeric.
 *
 * @param c This is the character to be checked
 * @return 0 to false or 1 to true
 */
int		ft_isdigit(int c);

/**
* @brief check if the character passed is alphanumeric
*
* @param c This is the character to be checked
* @return 0 to false or 1 to true
 */
int		ft_isalnum(int c);

/**
 * @brief check if the character passed is ascii.
 *
 * @param c This is the character to be checked
 * @return 0 to false or 1 to true
 */
int		ft_isascii(int c);

/**
 * @brief check if the character passed is printable.
 *
 * @param c This is the character to be checked
 * @return 0 to false or 1 to true
 */
int		ft_isprint(int c);

/**
 * @brief function calculates the length of the string pointed to by s,
 * excluding the terminating null byte
 *
 * @param s  string
 * @return function returns the number of bytes in the string pointed to by s.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief function fills the first n bytes of the memory area pointed to by s
 * with the constant byte c.
 *
 * @param s pointed
 * @param c costant
 * @param n first byte
 * @return void* function returns a pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief  the function sets the first n byte of the area starting at s to zero
 *
 * @param s character
 * @param n size max
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief The function copies size (n) bytes from string src to string dest.
 *
 * @param dest  who will receive
 * @param src  that will be copied
 * @param n maximum size
 * @return dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brieffunction copies n bytes from memory area src to memory area dest.
 * The memory areas may overlap: copying takes place as though the bytes in
 * src are first copied into a temporary array that does not overlap src or
 * dest,
 * and the bytes are then copied from the temporary array to dest.
 *
 * @param dest copy destination
 * @param src copied memory
 * @param n maximum size
 * @return void* function returns a pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief function copies up to size - 1 characters from the NUL-terminated
 * string src to dst, NUL-terminating the result.
 *
 * @param dest copy destination
 * @param src copied memory
 * @param size size max
 * @return size_t functions return the total length of the string they tried to
 * create. That means the length of src
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief function appends the NUL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) - 1 bytes, NUL-
 * terminating the result.
 *
 * @param dst string jute
 * @param src string that will jute
 * @param size size max
 * @return size_t that means the initial length of dst plus the length of src.
 * While this may seem somewhat confusing,
 * it was done to make truncation detection simple.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief check if the passed character is an lowercase letter ,
 * if it is true convert to uppercase.
 *
 * @param c This is the character to be checked.
 * @return int uppercase letter
 */
int		ft_tolower(int c);

/**
 * @brief check if the passed character is an uppercase letter ,
 * if it is true convert to uppercase.
 *
 * @param c This is the character to be checked.
 * @return int lowercase letter
 */
int		ft_toupper(int c);

/**
 * @brief function returns a pointer to the first occurrence of
 * the character c in the string s.
 *
 * @param s string to be checked.
 * @param c first occurrence.
 * @return char* pointer to the first occurrence of character c in string s.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief function returns a pointer to the last occurrence of
 * the character c in the string s.
 * @param s string to be checked.
 * @param c last occurrence.
 * @return char* pointer to the last occurrence of character c in string s.
 */
char	*ft_strrchr(const char *s, int c);

/***
 * @brief .
 *
 * @param s1
 * @param s2
 * @param n size max
 * @return int
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/***
 * @brief
 *
 * @param s
 * @param c
 * @param n size max
 * @return void*
 */
void	*ft_memchr(const void *s, int c, size_t n);

/***
 * @brief
 *
 * @param s1
 * @param s2
 * @param n size max
 * @return int
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/***
 * @brief
 *
 * @param big
 * @param little
 * @param len size max
 * @return char*
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/***
 * @brief
 *
 * @param nptr
 * @return int
 */
int		ft_atoi(const char *nptr);

/***
 * @brief
 *
 * @param nmemb
 * @param size
 * @return void*
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief function returns a pointer to a new string which is a duplicate of
 * the string s. Memory for the new string is obtained with malloc(3),
 *  and can be freed with free(3).
 *
 * @param s pointer
 * @return char* function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was  available,
 * with errno set to indicate the cause of the error.
 */
char	*ft_strdup(const char *s);

/***
 * @brief
 *
 * @param s
 * @param start
 * @param len size max
 * @return char*
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/***
 * @brief
 *
 * @param s1
 * @param s2
 * @return char*
 */
char	*ft_strjoin(char const *s1, char const *s2);

/***
 * @brief
 *
 * @param s1
 * @param set
 * @return char*
 */
char	*ft_strtrim(char const *s1, char const *set);

/***
 * @brief
 *
 * @param s
 * @param c
 * @return char**
 */
char	**ft_split(char const *s, char c);

/***
 * @brief
 *
 * @param n
 * @return char*
 */
char	*ft_itoa(int n);

/***
 * @brief
 *
 * @param s
 * @param f
 * @return char*
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/***
 * @brief
 *
 * @param s
 * @param f
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/***
 * @brief
 *
 * @param c
 * @param fd
 */
void	ft_putchar_fd(char c, int fd);

/***
 * @brief
 *
 * @param s
 * @param fd
 */
void	ft_putstr_fd(char *s, int fd);

/***
 * @brief
 *
 * @param s
 * @param fd
 */
void	ft_putendl_fd(char *s, int fd);

/***
 * @brief
 *
 * @param n
 * @param fd
 */
void	ft_putnbr_fd(int n, int fd);

/***
 * @brief
 *
 * @param content
 * @return t_list*
 */
t_list	*ft_lstnew(void *content);

/***
 * @brief
 *
 * @param lst
 * @param new
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/***
 * @brief
 *
 * @param lst
 * @return int
 */
int		ft_lstsize(t_list *lst);

/***
 * @brief
 *
 * @param lst
 * @return t_list*
 */
t_list	*ft_lstlast(t_list *lst);

/***
 * @brief
 *
 * @param lst
 * @param new
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/***
 * @brief
 *
 * @param lst
 * @param del
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/***
 * @brief
 *
 * @param lst
 * @param del
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/***
 * @brief
 *
 * @param lst
 * @param f
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/***
 * @brief
 *
 * @param lst
 * @param f
 * @param del
 * @return t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif