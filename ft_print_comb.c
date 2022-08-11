#include "stdio.h"

void ft_print_comb(void);
const char* pasar_a_str(int a);

int main(void) { 
  ft_print_comb(); 
}

void ft_print_comb(void) {
  int n1 = 0;
  int n2 = 1;
  int n3 = 2;
  char a[10];
  while (n1 >= 0) {
    
    sprintf(a, "%d%d%d,", n1, n2, n3);
    write(1, &a, 4);
    if (n1 == 7 && n2 == 8 && n3 == 9) {
      break;
    }
    if (n2 == 9) {
      n1 += 1;
      n2 = 1;
    } 
    else if (n3 == 9) {
      n2 += 1;
      n3 = 2;
    } 


    n3 += 1;
  }
}

//al no poder usarse ninguna funcion para pasar de int a srt pues tengo que hacer esto
const char* pasar_a_str(int a){
  if (a == 0){
    return "0";
  }
    if (a == 1){
    return "1";
  }
    if (a == 2){
    return "2";
  }
    if (a == 3){
    return "3";
  }
    if (a == 4){
    return "4";
  }
    if (a == 5){
    return "5";
  }
    if (a == 6){
    return "6";
  }
    if (a == 7){
    return "7";
  }
    if (a == 8){
    return "8";
  }
    if (a == 9){
    return "9";
  }
}

