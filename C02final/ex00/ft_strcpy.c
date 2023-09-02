/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:20:22 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/19 16:01:18 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr_dest;

	ptr_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ptr_dest);
}
/*int main (void)
{
	
	char dest[80];	
	char src []= "";
	char*  ret;
	

	 ret = ft_strcpy(dest, src);

	printf("dest es %s\n", dest);

	return (0);

}*/
