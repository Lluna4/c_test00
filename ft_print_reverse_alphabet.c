/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:10:31 by ltranca-          #+#    #+#             */
/*   Updated: 2022/08/17 14:03:45 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)

{
	ft_print_reverse_alphabet();
}

void	ft_print_reverse_alphabet(void)
{
	int		n;
	char	letr;

	n = 123;
	while (n > 97)
	{
		n -= 1;
		letr = n;
		write(1, &letr, 1);
	}
}
