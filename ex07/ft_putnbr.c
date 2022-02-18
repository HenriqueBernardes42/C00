/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:55:47 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/10 23:49:30 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nb, int indice)
{
	int	c;
	int	controller;

	controller = 1;
	if (nb < 0)
		controller = -1;
	while (indice > 0)
	{
		c = (((nb / indice) % 10) * controller) + 48;
		write(1, &c, 1);
		indice = indice / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	indice;
	int	cp_nb;

	indice = 1;
	cp_nb = nb;
	while (cp_nb > 9 || cp_nb < -9)
	{
		cp_nb = cp_nb / 10 ;
		indice = indice * 10;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_print(nb, indice);
	}
	else
	{
		ft_print(nb, indice);
	}
}
