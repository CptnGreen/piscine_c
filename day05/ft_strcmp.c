/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:20:03 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 19:23:44 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0'))
	{
		ft_putchar(s1[i]);
		ft_putchar(' ');
		ft_putchar(s2[i]);
		ft_putchar('\n');
		i += 1;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else
		return (1);
}
