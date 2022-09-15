/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 08:59:37 by troudot           #+#    #+#             */
/*   Updated: 2022/09/15 06:23:10 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int nb)
{
	if (nb >= 0 && nb <= 9)
	{	
		ft_putchar (nb + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putint(nb * (-1));
	}
	else
	{
		ft_putint(nb / 10);
		ft_putint(nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
		ft_putint(nb);
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
