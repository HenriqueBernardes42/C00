/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcao.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:16:07 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/04 15:37:36 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 122)
	{
		write(1, &letra, 1);
		letra++;
	}
}
