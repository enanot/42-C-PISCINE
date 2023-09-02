/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:06:39 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 16:26:37 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*ret;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char* ret;
	char src[] = " mundo ";
	char dest[80] = "Hola";

	ret = ft_strcat (dest, src);

	printf ("%s ,es dest\n", dest);

	return (0);


}*/
