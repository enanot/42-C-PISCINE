/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:39:02 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/23 17:02:08 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*int main (void)
{
	char *ret;
	char str[80] = "hola mundo";
	char to_find[80] = "m";

	ret = ft_strstr(str, to_find);

	printf("%s", ret);
	
}*/
