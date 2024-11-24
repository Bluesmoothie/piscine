/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:37:42 by ygille            #+#    #+#             */
/*   Updated: 2024/09/17 12:15:53 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	pos2;

	pos = 0;
	if (!to_find[pos])
		return (&str[pos]);
	while (str[pos])
	{
		pos2 = 0;
		while (str[pos + pos2] == to_find[pos2])
		{
			if (!to_find[pos2 + 1])
				return (&str[pos]);
			pos2++;
		}
		pos++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str[] = "test";
	char	to_find[] = "";

	printf("%c\n", ft_strstr(str, to_find));
	printf("%c\n", strstr(str, to_find));
}
*/
