/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:09:25 by ltranca-          #+#    #+#             */
/*   Updated: 2022/08/17 14:30:52 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_number(void);

int	main(void)

{
	ft_print_number();
}

void	ft_print_number(void)
{
	char	number;
	int		n;

	n = 0;
	while (n < 10)
	{
		number = n + 48;
		write(1, &number, 1);
		n++;
	}
}
