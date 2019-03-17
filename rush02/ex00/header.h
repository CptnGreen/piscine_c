/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 19:08:01 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 18:36:33 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void		is_rush(char *str);
void		is_rush00(char *str, int w, int h);
void		is_rush01(char *str, int w, int h);
void		is_rush02(char *str, int w, int h);
void		is_rush03(char *str, int w, int h);
void		is_rush04(char *str, int w, int h);

int			is_symbol(char c, char symb);

int			get_width(char *str);
int			get_height(char *str);

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nbr);

extern int	g_is_any;
extern int	g_is_prev;

#endif
