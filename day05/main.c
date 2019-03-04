/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:24:46 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 23:24:39 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *sra, unsigned int n);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int		num;

	if (argc > 1)
	{
		if (ft_strcmp(argv[1], "--putchar") == 0)
		{
			ft_putstr("putCHAR is runnung\n");
			ft_putchar(argv[2][0]);
			return (0);
		}
		else if (ft_strcmp(argv[1], "--putstr") == 0)
		{
			ft_putstr("putSTR is runnung\n");
			ft_putstr(argv[2]);
			return (0);
		}
		else if (ft_strcmp(argv[1], "--putnbr") == 0)
		{
			ft_putstr("putNBR is runnung\n");
			ft_putnbr(atoi(argv[2]));
			return (0);
		}
		else if (ft_strcmp(argv[1], "--strcpy") == 0)
		{
			ft_putstr("strCPY is runnung\n");
			ft_putstr(ft_strcpy(argv[2], argv[3]));
			return (0);
		}
		else if (ft_strcmp(argv[1], "--strncpy") == 0)
		{
			ft_putstr("str-N-CPY is runnung\n");
			ft_putstr(ft_strncpy(argv[2], argv[3], atoi(argv[4])));
			return (0);
		}
		else if (ft_strcmp(argv[1], "--strcmp") == 0)
		{
			ft_putstr("strCMP is runnung\n");
			num = ft_strcmp(argv[2], argv[3]);
			ft_putnbr(num);
			return (0);
		}
	}
	return (0);
}
