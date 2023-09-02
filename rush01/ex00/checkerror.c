/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:40:07 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 18:11:50 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	*parse(char **argv, int nums[]);

int	checkerror(char **argv, int args, int nums[])
{
	int	i;
	int	e;

	i = 0;
	e = 1;
	if (args != 2)
	{
		return (e);
	}
	while (argv[1][i] != '\0')
	{
		if ((i % 2 == 1) && (argv[1][i] != ' '))
		{
			return (e);
		}
		i++;
	}
	if (i != 31)
	{
		return (e);
	}
	parse(argv, nums);
	i = 0;
	while (i <= 15)
	{
		if ((nums[i] < 1 || nums [i] > 4))
		{
			return (e);
		}
		i++;
	}
	e = 0;
	return (e);
}
