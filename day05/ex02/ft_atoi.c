/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:11:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 18:16:21 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (str[i] == 0)
			i += 1;
		if (str[i] == '-')
		{
			sign = -1;
			i += 1;
		}
		else if (str[i] == '+')
			i += 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i];
			i += 1;
		}
		return (res * sign);
	}
	return (0);
}
