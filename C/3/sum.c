#include<stdio.h>
int sumOfDigits(int num);
int main()
{
int num,sum;
printf("enter any number");
scanf("%d",&num);
sum=sumOfDigits(num);
printf("sum of digits of %d=%d",num,sum);
return 0;
}
int sumOfDigits(int num)
{
if(num==0)
return 0;
else     
return ((num%10)+sumOfDigits(num/10));
}
