#include<stdio.h>
int power(int,int);
int main()
{
int x,n,res;
printf("enter base & power");
scanf("%d %d",&x,&n);
res=power(x,n);
printf("res=%d",res);
return 0;
}
int power(int b, int p)
{
if(p==0)
return 1;
else 
return (b*power(b,p-1));
}
