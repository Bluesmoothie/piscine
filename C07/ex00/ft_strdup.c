/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:34:21 by ygille            #+#    #+#             */
/*   Updated: 2024/09/30 12:05:27 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc (sizeof(char) * (len + 1));
	if (dup == NULL)
		return (dup);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dup[i] = src[i];
	return (dup);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char		*dup;
	char		*dup2;
	const char	str[] = "Hello";

	dup = ft_strdup(&str[0]);
	dup2 = strdup(&str[0]);
	(void)argc;
	printf("%p:%s\n", dup, dup);
	printf("%p:%s\n", dup2, dup2);
	return (0);
}
*/
