/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 17:36:34 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/14 17:55:01 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 4096

void	ft_display_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
}
