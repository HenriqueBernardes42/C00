/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:11:43 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/10 19:46:17 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int number_x)
{
	int	number_decimal;
	int	number_unit;

	number_decimal = (number_x % 10) + 48;
	number_unit = (number_x / 10) + 48;
	write(1, &number_unit, 1);
	write(1, &number_decimal, 1);
}

void	ft_print_comb2(void)
{
	int	number_a;
	int	number_b;

	number_a = 0;
	number_b = 1;
	while (number_a <= 99)
	{
		while (number_b <= 99)
		{
			if (number_b > number_a)
			{
				ft_print_comb(number_a);
				write(1, " ", 1);
				ft_print_comb(number_b);
				if (number_a != 98)
				{
					write(1, ", ", 2);
				}
			}
			number_b++;
		}
		number_b = 0;
		number_a++;
	}
}
