/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:20:03 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 18:15:42 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		i += 1;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else
		return (1);
}
