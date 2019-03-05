/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 16:11:23 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 17:45:48 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			index = i;
			j = 1;
			i++;
			while (!(str[i] == '\0' || to_find[j] == '\0'))
			{
				if (str[i++] != to_find[++j])
					break ;
			}
			if (to_find[j] == '\0')
				return (&str[index]);
			else
				i++;
		}
		else
			i++;
	}
	return (0);
}

