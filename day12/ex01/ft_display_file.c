/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 20:10:24 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/14 20:17:48 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 4096

int	ft_display_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (fd == -1)
	{
		ft_putstr("open() error.\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error.\n");
		return (1);
	}
	return (0);
}
