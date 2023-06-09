#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

  int a,b;
  char name[30];
  srand((unsigned int)time(NULL));

  printf("What is your name?\n");
  scanf("%s",&name);
  printf("Hello, %s!\n",name);

  printf("Rolling dice...\n");
  a=rand()%6+1;
  b=rand()%6+1;

  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);
  printf("Total value: %d\n",a+b);

  return 0;

}
