/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 09:31:13 by fde-fram          #+#    #+#             */
/*   Updated: 2019/11/18 16:17:53 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char *line = malloc(1);
	char **aline = &line;
	free(line);
	int fd = open("get_next_line.c", O_RDONLY);
	while(get_next_line(fd,aline))
	{

		printf("%s\n",*aline);
		free(line);

	}
	free(line);
	system("leaks a.out");
}
