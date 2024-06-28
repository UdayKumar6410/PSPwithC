#include<stdio.h>
int main() 
{
  int a,b,x;
  printf("Enter a,b values");
  scanf("%d%d",&a,&b);
  x=a;
  a=b;
  printf("a value is %d",a);
  b=x;
  printf("b value is %d",b);
  return 0;
}
