/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:01:06 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/21 16:19:19 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
/*int main (void)
{	
	char dest[]="holas tu";
	char src[] = "1234567890";
	unsigned int i;
	int size; 
	
   	size = 8;	
	i  = ft_strlcpy(dest,src, size);
	printf("dest es %s\n", dest);
	return(0);	
}*/
