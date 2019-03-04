/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:24:46 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 17:13:55 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		atoi(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	ptr[5];

	if (argc > 1)
	{
		if (argv[1] == "--putnbr")
			ft_putnbr(atoi(argv[2]));
		if (argv[1] == "--putchar")
			ft_putchar(argv[1][0]);
		if (argv[1] == "--putstr")
			ft_putstr(argv[1]);
		if (argv[1] == "--strcpy")
			ft_putstr(ft_strcpy(ptr, argv[2]);
	}
	return (0);
}
