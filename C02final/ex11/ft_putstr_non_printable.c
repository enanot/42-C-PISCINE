/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:43:02 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/22 10:57:55 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	bckslh;
	char	*hex;
	int		i;

	i = 0;
	bckslh = 92;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write (1, &bckslh, 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			i++;
		}
	}
}
/*int main(void)
{
	char str[]="Probando\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
