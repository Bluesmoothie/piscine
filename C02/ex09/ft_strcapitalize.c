/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:04:18 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 14:33:55 by ygille           ###   ########.fr       */
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

/*
	what to test
	1: uppercase
	2: lowercase
	3: letter
	4: number
	5: alphanum
*/
int	is_what(char str, int what)
{
	if (what == 1)
		return (str >= 'A' && str <= 'Z');
	if (what == 2)
		return (str >= 'a' && str <= 'z');
	if (what == 3)
		return (is_what(str, 1) || is_what(str, 2));
	if (what == 4)
		return (str >= '0' && str <= '9');
	if (what == 5)
		return (is_what(str, 3) || is_what(str, 4));
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	clen;
	int	len;
	int	word_start;

	clen = 0;
	word_start = 1;
	len = ft_strlen(str);
	while (clen < len)
	{
		if (is_what(str[clen], 1) && !word_start)
			str[clen] += 32;
		if (is_what(str[clen], 2) && word_start)
			str[clen] -= 32;
		if (is_what(str[clen], 5) && word_start)
			word_start = 0;
		if (!is_what(str[clen], 5) && !word_start)
			word_start = 1;
		clen++;
	}
	return (str);
}

/*
int	main(void)
{
	char str[] = "YoyoYoyoYOYOYO, je Suis Le 42rAT QUI fait du raP-O+RAP";
	printf("%s\n",str);
	printf("%s\n",ft_strcapitalize(str));
}
*/
