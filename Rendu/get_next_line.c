/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:52:35 by clcreuso     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 16:52:35 by clcreuso    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_file(char **str, int fd)
{
	char	*sample;
	char	*tmp;
	int		ret;

	if (!(sample = (char *)malloc(sizeof(*sample) * (BUFF_SIZE + 1))))
		return (0);
	ret = read(fd, sample, BUFF_SIZE);
	if (ret > 0)
	{
		sample[ret] = '\0';
		tmp = ft_strjoin(*str, sample);
		free(*str);
		*str = tmp;
	}
	free(sample);
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char	**str;
	int			is_alloc;
	char		*save;
	int			ret;

	is_alloc = 0;
	if (((!line || BUFF_SIZE < 0 || fd < 0) ||
		(!str && !(str = malloc(sizeof(char **) * NB_FD)))) ||
		(!(*(str + fd)) && !(*(str + fd) = ft_strnew(is_alloc++))))
		return (-1);
	while (!(save = ft_strchr(*(str + fd), '\n')))
	{
		ret = ft_read_file(&(*(str + fd)), fd);
		if ((ret == 0) && !(ft_strlen(*(str + fd))))
			return (0);
		if (ret == 0)
			*(str + fd) = ft_strjoin(*(str + fd), "\n");
		if (ret < 0)
			return (-1);
	}
	*line = ft_strsub(*(str + fd), 0, ft_strlen(*(str + fd)) - ft_strlen(save));
	if (is_alloc == 1)
		free(*(str + fd));
	*(str + fd) = ft_strdup(save + 1);
	return (1);
}
