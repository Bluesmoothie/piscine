/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:39:56 by ygille            #+#    #+#             */
/*   Updated: 2024/09/16 09:58:33 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	clen;

	clen = 0;
	while ((clen < n) && src[clen] != '\0')
	{
		dest[clen] = src [clen];
		clen++;
	}
	while (clen < n)
	{
		dest[clen] = '\0';
		clen++;
	}
	return (dest);
}

/*
int main(void)
{
    char str[] = "test";
    char str2[7];
	unsigned int len = 7;
	printf("%s\n",str);
    ft_strncpy(str2,str,len);
    printf("%s\n", str);
    write(1, &str2, len);
}
*/
