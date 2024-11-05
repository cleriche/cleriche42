/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:27:39 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/05 16:13:16 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int c); // verifie c == caractere alphabetique
int	ft_isdigit(int c); // verifie c == chiffre 0 a 9
int	ft_isalnum(int c); // verifie c == chiffre ou alphabetique
int	ft_isascii(int c); // verifie c == ascii 0 a 127
int	ft_isprint(int c); // verifie c == ascii imprimable 32 a 126
size_t	ft_strlen(const char *str); // calcul longueur sans compter \0
void	*ft_memset(void *ptr, int value, size_t n); // remplir memoire avec octet defini
void	ft_bzero(void *ptr, size_t n); // remplir memoire avec octet = 0
void	*ft_memcpy(void *dest, const void *src, size_t n); // copie src vers dest
void	*ft_memmove(void *dest, const void *src, size_t n); // copie n octets src vers dest
size_t	ft_strlcpy(char *dest, const char *src, size_t size); // copie str src vers dest + \0
size_t	ft_strlcat(char *dest, const char *src, size_t size); // ajoute str src a dest + \0

#endif //LIBFT_H
