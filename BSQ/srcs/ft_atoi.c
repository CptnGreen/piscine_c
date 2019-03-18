/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:11:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 15:58:11 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		clear_prefix(char *s);

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0')
	{
		i = clear_prefix(str);
		if (str[i] == '-')
		{
			sign = -1;
			i += 1;
		}
		else if (str[i] == '+')
			i += 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - 48);
			i += 1;
		}
		return (res * sign);
	}
	return (0);
}

int		clear_prefix(char *s)
{
	int		j;

	j = 0;
	while ((s[j] >= 8 && s[j] <= 13) || s[j] == ' ')
	{
		j += 1;
	}
	return (j);
}
