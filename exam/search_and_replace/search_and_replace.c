/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 17:39:16 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/21 18:02:42 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *d, char *s);
int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	int		i;
	char	a;
	char	b;

	i = 0;
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		a = argv[2][0];
		b = argv[3][0];
		printf("a = %c, b = %c\n", a, b);
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == a)
				argv[1][i] = b;
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *d, char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return	(d);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return	(i);
}
