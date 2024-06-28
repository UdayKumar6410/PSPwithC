#include<stdio.h>
int main()
{
  float m,cm,km;
  printf("enter m");
  scanf("%f",&m);
  cm=m*100;
  km=m/1000;
  printf("cm value is %f",cm);
  printf("km value is %f",km);
  return 0;
}
