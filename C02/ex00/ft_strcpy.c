/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:43:12 by ygille            #+#    #+#             */
/*   Updated: 2024/09/12 14:31:55 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	len;
	int	clen;

	len = ft_strlen(src);
	clen = 0;
	while (clen <= len)
	{
		dest[clen] = src [clen];
		clen++;
	}
	return (dest);
}

/*
int main(void)
{
    char str[] = "test";
	char str2[5];
	ft_strcpy(str2,str);
	printf("%s\n", str);
	printf("%s\n", str2);
}
*/
