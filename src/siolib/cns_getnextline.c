#include "../inc/stdlib.h"

static int	_checklbreak(const char *buff)
{
	if (!buff)
		return 0;

	for (int i = 0; buff[i] && buff[i] != '\n'; i++) ;

	if (buff[i] == '\n')
		i++;

	return i;
}

static char	*_strjoin(char *buff, char *line)
{
	char	*new_line = NULL;
	if (!buff)
		return NULL;

	int	buff_sz = _checklbreak(buff);
	int	line_sz = _checklbreak(line);

	new_line = (char *)malloc(sizeof(char) * (buff_sz + line_sz + 1));
	if (!new_line)
		return NULL;

	int	i = -1;
	while (++i < line_sz)
		new_line[i] = line[i];

	int	j = -1;
	while (++j < buff_sz)
		new_line[i++] = buff[j];
	new_line[i] = '\0';

	free(line);
	return new_line;
}

static char	*_getline(int lbrk, char *buff, int fd)
{
	char	*line = NULL;

	while (!lbrk && (buff[0] || read(fd, buff, BUFFER_SIZE))) {

		line = _strjoin(buff, line);

		int	i = 0, j = 0;
		while (buff[i]) {
			if (lbrk) {
				buff[j] = buff[i];
				j++;
			}
			if (buff[i] == '\n')
				lbrk = 1;
			buff[i] = 0;
			i++;
		}
	}
	return line;
}

char	*cns_getnexline(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	int		lbrk = 0, i;
	char		*line = NULL;

	if ((read(fd, 0, 0) < 0) || BUFFER_SIZE < 1) {

		for (int i = 0; buff[i] != '\0'; i++)
			buff[i] = 0;

		return NULL;
	}

	line = _getline(lbrk, buff, fd);

	return line;
}

