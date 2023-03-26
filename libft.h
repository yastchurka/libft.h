/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:02:46 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/02 15:10:20 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void			*ft_memset(void *str, int c, size_t n);
int				ft_isalpha(int a);
int				ft_isascii(int a);
int				ft_isalnum(int a);
int				ft_isdigit(int a);
int				ft_isprint(int arg);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
size_t			ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strchr(const char *str, int c);
void			*ft_memchr(const void *s, int c, size_t n);
char			*ft_strrchr(const char *s, int c);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(const char *s, int c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strdup(const char *s);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(const char *s, char c);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
