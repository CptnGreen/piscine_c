/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 21:22:32 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/17 18:00:51 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 4096

int		main(void)
{
	char		buf[BUF_SIZE + 1];
	int			ret;

	ret = read(0, buf, BUF_SIZE);
	printf("ret = %d\n", ret);
	is_rush(buf);
	ft_putstr("\n");
	return (0);
}
