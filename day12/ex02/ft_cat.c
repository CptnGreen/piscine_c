#include "header.h"

#define BUF_SIZE 4096

int	ft_display_file(int fd)
{
	int	ret;
	char	buf[BUF_SIZE + 1];

	if (fd == -1)
	{
		ft_putstr("open() error.\n");
		return (1);
	}
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error.\n");
		return (1);
	}
	return (0);
}
