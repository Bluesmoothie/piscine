/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:27:58 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 19:29:32 by ygille           ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int	len;
	int	clen;

	len = ft_strlen(str);
	clen = 0;
	while (clen < len)
	{
		if (is_what(str[clen], 3) && is_what(str[clen], 2))
			str[clen] -= 32;
		clen++;
	}
	return (str);
}

/*
int	main(void)
{
	char a[] = "TTTestttttt12";

	ft_strupcase(a);
	printf("%s\n",a);
}
*/
