#include<stdio.h>
void change(int *num)
{
printf("Before adding value inside function num=%d \n",*num);
(*num)+=500;
printf("After adding value inside function num=%d \n", *num);
}
int main()
{
int x=5;
printf("Before function call x=%d \n", x);
change(&x);
printf("After function call x=%d \n", x);
return 0;
}
