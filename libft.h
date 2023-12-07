/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juca <juca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:03:03 by juca              #+#    #+#             */
/*   Updated: 2023/12/07 17:14:26 by juca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t num);
size_t 	ft_strlcpy(char *dest, const char *src, size_t size);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t	strlcat(char *dest, const char *src, size_t size);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
int		atoi(const char *nptr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
#endif