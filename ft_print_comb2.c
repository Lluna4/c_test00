#include <unistd.h>

void    ft_print_comb2(void);
void    ft_printmul(int n, int m);

int main()

{
    ft_print_comb2();
}

void    ft_print_comb2(void)
{
    int     a;
    int     b;
    char    c;

    a = 0;
    c = 44;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_printmul(a, b);
            if (a != 98 || b != 99)
            {
                write(1, &c, 1);
            }
            b++;
        }
        a++;
    }

}

void    ft_printmul(int n, int m)
{
    char    n1;
    char    n2;
    char    m1;
    char    m2;
    char    sp;

    sp = 32;
    n2 = n % 10 + 48;
    n1 = n / 10 + 48;
    m2 = m % 10 + 48;
    m1 = m / 10 + 48;
    write(1, &n1, 1);
    write(1, &n2, 1);
    write(1, &sp, 1);
    write(1, &m1, 1);
    write(1, &m2, 1);
}
