/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchesnea <mchesnea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:39:01 by mchesnea          #+#    #+#             */
/*   Updated: 2025/10/20 21:25:07 by mchesnea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *pointer, size_t count);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int charactere);
int		ft_isalpha(int charactere);
int		ft_isascii(int charactere);
int		ft_digit(int charactere);
int		ft_isprint(int charactere);
void	*ft_memchr(const void *mem, int chara, size_t size);
int		ft_memcmp(const void *p1, const void *p2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
char	*ft_strchr(const char *str, int serchchar);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *tab);
int		ft_strncmp(const char *first, const char *second, size_t len);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *str, int serchchar);
int		ft_tolower(int character);
int		ft_toupper(int character);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
#endif
