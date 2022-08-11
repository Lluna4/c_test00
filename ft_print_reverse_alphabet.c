#include "stdio.h"
void ft_print_reverse_alphabet(void);

int main(void){
ft_print_reverse_alphabet();
}
void ft_print_reverse_alphabet(void){
char alfabeto_al_reves[] = "zyxwvutsrqpoñnmlkjihgfedcba";
write(1, &alfabeto_al_reves, 28);
}

