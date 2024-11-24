/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:31:19 by ygille            #+#    #+#             */
/*   Updated: 2024/09/16 10:36:16 by ygille           ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;

	pos = 0;
	if (size != 0)
	{
		while (pos < size - 1)
		{
			dest[pos] = src[pos];
			pos++;
		}
		dest[pos] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest[10]="";
	char src[] = "123456789";
	char dest2[10]="";
	char src2[] = "123456789";
	int s = 5;


	printf("%s\n", src);
	printf("%d\n",ft_strlcpy(dest, src, s));
	printf("%d\n",strlcpy(dest2, src2, s));
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
*/
