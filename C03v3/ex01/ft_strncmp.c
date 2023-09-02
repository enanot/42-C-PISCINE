/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:48:00 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/23 12:30:07 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;
	int				rest;

	j = 0;
	rest = 0;
	while ((j < n) && (!rest) && (s1[j] != '\0') && (s2[j] != '\0'))
	{
		rest = s1[j] - s2[j];
		j++;
	}
	if ((j < n) && (!rest) && ((s1[j] == '\0' || s2[j] == '\0')))
	{
		rest = s1[j] - s2[j];
	}
	return (rest);
}
/*int main(void)
{
	int i;
	int n;

	char s1[]= "Hola mundo";
	char s2[]= "Hola mundo";
	n = 40;
	i = ft_strncmp (s1, s2, n);

	printf ("i es %d\n",i);

	return (0);

}*/
