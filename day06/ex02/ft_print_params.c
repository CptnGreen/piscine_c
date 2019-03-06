/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:11:50 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/06 15:12:33 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (argc > 1)
	{
		while (n < argc)
		{
			while (argv[n][i] != '\0')
			{
				ft_putchar(argv[n][i]);
				i = i + 1;
			}
			ft_putchar('\n');
			n = n + 1;
			i = 0;
		}
	}
	return (0);
}
