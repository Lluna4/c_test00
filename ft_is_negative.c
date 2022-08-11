#include "stdio.h"

void ft_is_negative(int n);

int main(){
ft_is_negative(2);
}

void ft_is_negative(int n){
    if (n >= 0){
        write(1, "P", 1);
    }
    else if (n < 0){
        write(1, "N", 1);
    }
}