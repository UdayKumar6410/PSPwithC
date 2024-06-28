#include<stdio.h>
int main()
{
int num1=10,num2=20,result;
scanf("%d%d",&num1,&num2);
char operator;
scanf("%c",&operator);
switch(operator)
{ 
case '+' : result=num1+num2;
printf("%d",result);
break;
case '-' : result=num1-num2;
printf("%d",result);
break;
case '*' : result=num1*num2;
printf("%d",result);
break;
case '/' : result=num1/num2;
printf("%d",result);
break;
}
return 0;
}
