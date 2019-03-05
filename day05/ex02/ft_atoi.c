/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:11:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 13:20:14 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		clear_spaces_and_nulls(char *str);

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		i = clear_spaces_and_nulls(str);
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

int		clear_spaces_and_nulls(char *str)
{
	int		index;

	index = 0;
	while (str[index] == ' ')
		index += 1;
	while (str[index] == '0')
		index += 1;
	return (index);
}
