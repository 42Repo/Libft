/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:31:53 by asuc              #+#    #+#             */
/*   Updated: 2023/08/12 04:31:53 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
char			**ft_split(char *str, char *charset);
int				ft_strlen(char *str);
char			*ft_strdup(char *src);
char			*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_isdigit(char c);
int				ft_isalpha(char c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(char c);
void			ft_bzero(void *s, size_t n);
void			*calloc(size_t nmemb, size_t size);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
char			*ft_itoa(int n);
int				ft_toupper(char c);
int				ft_tolower(char c);
void			ft_putendl_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strchr(char *s, char c);
char			*ft_strchr(char *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			*memset(void *s, int c, size_t n);

#endif
