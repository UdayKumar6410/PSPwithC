#include<stdio.h>
int product(int,int);   
int main()
{
int num1,num2,result; 
printf("enter two numbers");
scanf("%d %d",&num1,&num2);  
result=product(num1,num2);
printf("product of %d and %d is %d\n",num1,num2,result);
return 0;
}
int product(int a,int b) 
{
if(b==1)
{
return a;
}
else
{ 
return a+product(a,b-1);
}
}

