/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:24:46 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 18:19:29 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	char	ptr[5] = "ololo";

	if (argc > 1)
	{
		if (ft_strcmp(argv[1], "--putnbr") == 0)
		{
			ft_putnbr(atoi(argv[2]));
			return (0);
		}
		else if (ft_strcmp(argv[1], "--putchar") == 0)
		{
			ft_putchar(argv[2][0]);
			return (0);
		}
		else if (ft_strcmp(argv[1], "--putstr") == 0)
		{
			ft_putstr(argv[2]);
			return (0);
		}
		else if (ft_strcmp(argv[1], "--strcpy") == 0)
		{
			ft_putstr(ft_strcpy(ptr, argv[2]));
			return (0);
		}
		else if (ft_strcmp(argv[1], "--strcmp") == 0)
		{
			ft_putnbr(ft_strcmp(argv[2], argv[3]));
			return (0);
		}
	}
	return (0);
}
