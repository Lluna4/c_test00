#include <unistd.h>

void    ft_putnbr(int n);

int main() {
    ft_putnbr(2147483647);
}

void    ft_putnbr(int n)
{
    char a1;
    char a2;
    int n2;

    n2 = n;
    if (n > 10)
    {
        while (n2 > 10) {
            a1 = n2 / 10 + 48;
            a2 = n2 % 10 + 48;
            n2 = n2 / 10;

            write(1, &a2, 1);

        }
        write(1, &a1, 1);

    }

}
