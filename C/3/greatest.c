#include<stdio.h>
int greatest(int a,int b) 
{
if(a>b) 
{
return a;
} 
else 
{
return b;
}
}
int main() 
{
int a,b,large;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
large = greatest(a,b);
printf("greatest is %d",large);
return 0;
}
