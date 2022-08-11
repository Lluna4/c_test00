#include "stdio.h"

void ft_print_alphabet(void);
int main(void) {
  ft_print_alphabet();
}

void ft_print_alphabet(void){
  char alfabeto[] = "abcdefghijklmnñopqrstuvwxyz";
  write(1, &alfabeto, 28);
  scanf("%c", &alfabeto);
}
