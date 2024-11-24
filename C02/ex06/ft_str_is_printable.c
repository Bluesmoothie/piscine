/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:20:00 by ygille            #+#    #+#             */
/*   Updated: 2024/09/12 18:43:27 by ygille           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
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
			if (! (str[clen] >= ' ' && str[clen] <= '~'))
				trig = 0;
			clen++;
		}
	}
	return (trig);
}

/*
int	main(void)
{
	char	c[2] = {'18',' '};
	printf("%d",ft_str_is_printable(&c));
}
*/
