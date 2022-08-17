#include <unistd.h>

void    ft_putnbr(int n);


int main() {

    ft_putnbr(-2147488);
}

void    ft_putnbr(int n)
{
    char	a1;
    char	a2;
	char	a3;
	char	a4;
    float	n2;
	int		n3;
	int		n4;
	n2 = n;
	n3 = 10;
	a3 = 45;
	a4 = 2 + 48;
	if (n < 10 && n > 0)
	{
		a1 = n + 48;
		write(1, &a1, 1);
	}
	if (n < 100 && n > 0)
	{
		a1 = n / 10 + 48;
		a2 = n % 10 + 48;
		write(1, &a1, 1);
		write(1, &a2, 1);
	}

    if (n > 100)
    {
        while (n2 > 10) 
		{
            n2 = n2 / 10;
			
		}
		a2 = n2 / 10 + 48;
		while (n2 < n / 10)
		{
			n4 = n2;
			a1 = n4 % n3 + 48;
			n2 = n2 * 10;
			if (n2 >= n && a1 != 0)
			{
				a1 = (a1 - 48) * 2 + 48;
			}
			write(1, &a1, 1);
		}
		a2 = n % n3 + 48;
		write(1, &a2, 1);
	}
	if (n < 0)
	{
		if (n <= -2147483648)
		{
			n = 147483648;
			write(1, &a3, 1);
			write(1, &a4, 1);

			ft_putnbr(n);
		}
		else
		{
			n = n * -1;
			write(1, &a3, 1);
			ft_putnbr(n);
		}
	
		
	}
}
