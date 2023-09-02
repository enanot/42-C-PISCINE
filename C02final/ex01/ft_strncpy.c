/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:10:20 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/21 14:47:53 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*int main (void)
{	
	char dest[80];
	char src[] = "Hola mundo";
	unsigned int i;
	char *ret;

	i = 9; 
	ret = ft_strncpy(dest,src, i);
	printf("dest es %s\n", dest);
	return(0);	
}*/
