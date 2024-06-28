#include <stdio.h>
int main()
{
int x,y,*a,*b,z;
printf("enter the value of x and y");
scanf("%d%d",&x,&y);
printf("before Swapping x=%d y=%d",x,y);
a=&x;
b=&y;
z=*b;
*b=*a;
*a=z;
printf("after Swapping x=%d y=%d",x,y);
return 0;
}
