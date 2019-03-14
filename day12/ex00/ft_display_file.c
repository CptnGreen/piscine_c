#include "header.h"

#define BUF_SIZE 4096

void	ft_display_file(int fd)
{
	int	ret;
	char	buf[BUF_SIZE + 1];

	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
