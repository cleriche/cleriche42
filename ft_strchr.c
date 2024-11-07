/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:50:36 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/07 14:05:59 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

/*int	main(void)
{
	const char	str[] = "Je suis un robot 42";
	char	*result;

	printf("str = %s\n", str);

	result = ft_strchr(str, '4');

	if (result != NULL)
		printf("result = %c\n", *result);
	else
		printf("NULL\n");
	return(0);
}*/
