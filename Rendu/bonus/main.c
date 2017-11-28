/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:20:42 by clcreuso     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 18:20:42 by clcreuso    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include "bonus.h"

char	*ft_strsay(char *line, char *start)
{
	char	*ret;
	int		len;

	ret = ft_strdup(start);
	ret = ft_strjoin(ret, line);
	len = ft_strlen(ret);
	ret[len] = '"';
	ret[len + 1] = 0;
	return (ret);
}

int		main(int argc, char const *argv[])
{
	char	*line;
	char	*say;
	int		fd;

	fd = open(argv[2], O_RDONLY);
	if (ft_strcmp(argv[1], "write") == 0)
		while (get_next_line(fd, &line) == 1)
			ft_putendl(line);
	if (ft_strcmp(argv[1], "speak") == 0)
		while (get_next_line(fd, &line) == 1)
		{
			system(say);
			printf("%s\n", say);
			free(say);
		}
	return (0);
}
