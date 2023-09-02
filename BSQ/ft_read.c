/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dventura <dventura@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:50:34 by dventura          #+#    #+#             */
/*   Updated: 2023/08/30 18:26:01 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_read(char *filename)
{
	int		fd;
	int		size;
	char	*buffer;

	size = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(size * sizeof(char));
	if (!buffer)
		return (0);
	while ((read(fd, buffer, sizeof(char))) > 0)
		size++;
	close(fd);
	buffer = (char *)malloc(size * sizeof(char));
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (read(fd, buffer, size) >= 0)
	{
		buffer[size + 1] = '\0';
		close(fd);
		return (buffer);
	}
	return (0);
}
