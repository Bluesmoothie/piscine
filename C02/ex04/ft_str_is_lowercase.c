/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/12 18:10:52 by ygille           ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	len;
	int	trig;
	int	clen;

	clen = 0;
	trig = 1;
	len = ft_strlen(str);
	if (str[0] == '\0')
		return (trig);
	else
	{
		while (clen < len)
		{
			if (! (str[clen] >= 'a' && str[clen] <= 'z'))
				trig = 0;
			clen++;
		}
	}
	return (trig);
}

/*
int	main(void)
{
	char	c[] = "jhrefhh";
	printf("%d",ft_str_is_lowercase(&c));
}
*/
