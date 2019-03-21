/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 18:29:42 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/21 18:59:41 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_rep(char *str, char c, int pos);
int		is_in_second(char *srt2, char c);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')		
		{
			if (!is_rep(argv[1], argv[1][i], i))
			{
				if (is_in_second(argv[2], argv[1][i]))
					ft_putchar(argv[1][i]);
			}
			i++;
		}
	} 
	ft_putchar('\n');
}

int		is_rep(char *str, char c, int pos)
{
	int		i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_in_second(char *str2, char c)
{
	int		i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
