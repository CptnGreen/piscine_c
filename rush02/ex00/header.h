/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 19:08:01 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 19:24:00 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void		is_rush(char *str);
void		is_rush01(char *str);
void		is_rush02(char *str);
void		is_rush03(char *str);
void		is_rush04(char *str);

int			get_width(char *str);
int			get_height(char *str);

void		ft_putchar(char c);
void		ft_putstr(char *str);

extern int	is_any;
extern int	is_prev;

#endif
