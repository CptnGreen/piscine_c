/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:10:50 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/21 21:49:25 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);
int		count_words(char *str);
void	split_words(char *str, char **ar);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);

int		main(int argc, char **argv)
{
	char	**words;
	int		num;

	if (argc == 2)
	{
		num = count_words(argv[1]);
		printf("num = %d\n", num);
		words = (char **)malloc(sizeof(char *) * (num + 1));
		words[num] = NULL;
		split_words(argv[1], words);
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	split_words(char *str, char **ar)
{
	int		num;
	int		i;
	int		j;
	int		is_sep;
	int		start;
	int		end;
	char	tmp;
	int		len;

	num = 0;
	i = 0;
	j = 0;
	is_sep = 1;
	len = ft_strlen(str);
	if (str)
	{
		while (i <= len)
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
			{
				if (is_sep == 0 && num > 0)
				{
					end = i;
					tmp = str[i];
					str[i] = '\0';
					ar[num - 1]= ft_strdup(str + start);
					str[i] = tmp;
					printf("ar[%d] = %s\n", num - 1, ar[num - 1]);
				}
				is_sep = 1;
				i++;
			}
			else 
			{
				if (is_sep == 1)
				{
					is_sep = 0;
					start = i;
					num++;
				}
				i++;
			}
		}
	}
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	if (str)
	{
		len = ft_strlen(str);
		dup = (char *)malloc(sizeof(char) * (len + 1));
		dup[len] = '\0';
		while (str[i] != '\0')
		{
			dup[i] = str[i];
			i++;
		}
	}
	else
		return (NULL);
	return (dup);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		count_words(char *str)
{
	int		num;
	int		i;
	int		is_sep;

	num = 0;
	i = 0;
	is_sep = 1;
	if (str)
	{
		while (str[i] != '\0')
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				is_sep = 1;
			}
			else if (is_sep == 1)
			{
				is_sep = 0;
				num++;
			}
			i++;
		}
	}
	return (num);
}
