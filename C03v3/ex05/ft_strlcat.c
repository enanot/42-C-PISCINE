/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:07:00 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 17:37:01 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	i = ft_strlen(dest);
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
/*int		main(void)
{
	char dest[20] = "abc";
	char src[] = "defghij";
	unsigned int size = 6;
	unsigned int result;
	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);
	return (0);
}*/
