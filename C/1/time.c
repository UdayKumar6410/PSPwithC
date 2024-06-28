#include<stdio.h>
int main()
{
  float h,m,s;
  printf("enter h value");
  scanf("%f",&h);
  s=h*3600;
  m=h*60;
  printf("s value is %f",s);
  printf("m value is %f",m);
  return 0;
}
