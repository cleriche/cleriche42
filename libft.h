/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:27:39 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/07 16:29:06 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h> // bibliotheque size_t (qui compte des octets)

/* fonctions de verification de caracteres */
int		ft_isalpha(int c); // verifie c == caractere alphabetique
int		ft_isdigit(int c); // verifie c == chiffre 0 a 9
int		ft_isalnum(int c); // verifie c == chiffre ou alphabetique
int		ft_isascii(int c); // verifie c == ascii 0 a 127
int		ft_isprint(int c); // verifie c == ascii imprimable 32 a 126
int		ft_toupper(int c); // converti c en majuscule
int		ft_tolower(int c); // converti c en minuscule

/* fonctions de manipulation de chaines */
size_t	ft_strlen(const char *str); /* calcul longueur sans compter \0*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size); // copie str src vers dest + \0
size_t	ft_strlcat(char *dest, const char *src, size_t size); // ajoute str src a dest + \0

/* fonctions de controle de chaines */
char	*ft_strchr(const char *s, int c); // cherche 1ere itertion de c dans s
char	*ft_strrchr(const char *s, int c); // cherche derniere iteration de c dans s
int		*ft_strncmp(const char *s1, const char *s2, size_t n); // compare chaines sur n char

/* fonctions de manipulation de memoire */
void	*ft_memset(void *ptr, int value, size_t n); /* remplir memoire avec octet defini*/
void	ft_bzero(void *ptr, size_t n); // remplir memoire avec octet = 0
void	*ft_memcpy(void *dest, const void *src, size_t n); // copie src vers dest
void	*ft_memmove(void *dest, const void *src, size_t n); // copie n octets src vers dest

#endif //LIBFT_H
