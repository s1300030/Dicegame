#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

  int a,b;
  srand((unsigned int)time(NULL));

  printf("Rolling dice...\n");
  a=rand()%6+1;
  b=rand()%6+1;

  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);
  printf("Total value: %d\n",a+b);

  return 0;

}
