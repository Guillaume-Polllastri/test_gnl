/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guill <guill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:13:56 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/11 16:54:13 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
    	int fd;
    	char    *line;

    	//fd = open("nl", O_RDONLY);
	fd = open("read_error.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("[%s", line);
		free(line);
	}
	return (0);
}
