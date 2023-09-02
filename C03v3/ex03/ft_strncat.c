/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:27:34 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 16:37:56 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*ret;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	ret = dest;
	return (ret);
}
/*int main(void)
{	
	unsigned int nb;
	char* ret;
	char src[] = " mundo ";
	char dest[80] = "Hola";
	nb = 4;

	ret = ft_strncat (dest, src, nb);

	printf ("%s ,es dest\n", dest);

	return (0);
}*/
