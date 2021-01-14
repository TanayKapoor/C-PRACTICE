#include<stdio.h>

int main(){
  int n =20, *pntr;
  pntr = &n;
  printf("Address of n variable is %x \n", &n);
  printf("Address of pntr is %x \n", pntr);
  printf("Address of pntr variable is %x \n", *pntr);


  return 0;
}