/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:24:05 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/06 16:50:56 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	char	r;
	char	min;

	i = 0;
	n = 0;
	min = find_min(argv
	if (argc >= 1)
	{
		while (n > 0)
		{
			while (argv[n][i] != '\0')
			{
				ft_putchar(argv[n][i]);
				i = i + 1;
			}
			ft_putchar('\n');
			n = n - 1;
			i = 0;
		}
	}
	return (0);
}

char	*find_min_wrd(char **params, int n)
{
	int		i;
	char	*min_wrd;

	i = 0;
	min_wrd[0] = 255;
	while (i < n)
	{
		if (ft_strcmp(params[i], min_wrd) < 0)
			min_wrd = ft_strcpy(min_wrd, params[i]);
		i++;
	}
	return (min_wrd);
}

void	ft_pustr_nl(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

void	swap_two_elements(char *array, int n1, int n2)
{
	char	c;

	c = array[n1];
	array[n1] = array[n2];
	array[n2] = c;
}

void	bubble_sort(char *array, int len)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (len - k > 1)
	{
		while (i < len - k)
		{
			if (array[i] > array[i + 1])
				swap_two_elements(i, i + 1);
			i++;	
		}
		k++;
		i = 0;
	}
}
