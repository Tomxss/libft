/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:55:56 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/05/25 17:04:19 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define IS_SPACE(x) (x == ' ' || x == '\t' || x== '\r' || x == '\f')

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);
int		ft_isalpha(int i);
int		ft_isdigit(int i);

int		ft_isalpha(int i);
int		ft_islower(int i);
int		ft_isupper(int i);

int		ft_isprint(int c);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strcpy(char *dest,const char *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);

char	*ft_strnew(size_t size);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_putchar(char c);
char	*ft_itoa(int n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
int		ft_strequ(char	const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);

void	ft_putchar_fd(char c, int fd);
int		ft_countwords(char const *str, char c);



#endif
