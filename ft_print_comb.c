/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:24:29 by ltranca-          #+#    #+#             */
/*   Updated: 2022/08/14 13:14:26 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_comb(void);
void	ft_mulprint(int c1, int c2, int c3);

int		g_a;
int		g_b;
int		g_c;
char	g_a4;

g_a = 0;

int	main(void)

{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	a1;
	char	a2;
	char	a3;

	g_a4 = 44;
	while (g_a <= 7)
	{
		g_b = g_a + 1;
		while (g_b <= 8)
		{
			g_c = g_b + 1;
			while (g_c <= 9)
			{
				ft_mulprint(g_a, g_b, g_c);
				if (g_a != 7 || g_b != 8 || g_c != 9)
				{
					write(1, &g_a4, 1);
				}
				g_c++;
			}
			g_b++;
		}
		g_a++;
	}
}

void	ft_mulprint(int c1, int c2, int c3)
{
	char	c11;
	char	c22;
	char	c33;

	c11 = c1 + 48;
	c22 = c2 + 48;
	c33 = c3 + 48;
	write(1, &c11, 1);
	write(1, &c22, 1);
	write(1, &c33, 1);
}
