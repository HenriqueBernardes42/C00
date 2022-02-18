/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:21:55 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/08 15:48:31 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(int number)
{
	int	last;
	int	middle;
	int	first;

	middle = ((number % 100) / 10) + 48;
	first = (number / 100) + 48;
	last = ((number % 10) + 48);
	write(1, &first, 1);
	write(1, &middle, 1);
	write(1, &last, 1);
}

void	ft_print_comb(void)
{
	int	number;

	number = 0;
	while (number <= 1000)
	{
		if ((number % 10 != (number / 100)))
		{
			if (((number % 100) / 10) < number % 10)
			{
				if (((number % 100) / 10) > number / 100)
				{
					ft_print_char(number);
					if (number != 789)
					{
						write(1, ", ", 2);
					}
				}
			}		
		}
		number++;
	}
}
