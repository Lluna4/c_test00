#include "stdio.h"

void ft_print_number(void);

int main(void){
ft_print_number();
}

void ft_print_number(void){
    char number[] = "0123456789";
    write(1, &number, 10);

}