/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:17:55 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 15:46:37 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while ((s1[j] == s2[j]) && (s1[j] != '\0') && (s2[j] != '\0'))
	{
		j++;
	}
	return (s1[j] - s2[j]);
}
/*int main(void)
{
	int i;
	char s1[]= "Hola";
	char s2[]= "H";

	i = ft_strcmp (s1, s2);

	printf ("i es %d\n",i);

	return (0);

}*/
