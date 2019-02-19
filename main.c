#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

int main(int ac, char **av)
{
	int		fd;
	char	*line;

	fd = open((const char *)av[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
}
