/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 19:08:01 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 22:49:17 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void		is_rush(int width, int height, char *str);
int			is_rush00(char *str, int w, int h);
int			is_rush01(char *str, int w, int h);
int			is_rush02(char *str, int w, int h);
int			is_rush03(char *str, int w, int h);
int			is_rush04(char *str, int w, int h);

int			get_width(char *str);
int			get_height(char *str);

void		print_result(int width, int height, int *exit_codes);

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nbr);

#endif
