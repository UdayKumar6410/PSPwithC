#include <stdio.h>
void printEvenOdd(int c,int d);
int main()
{
int a,b;
printf("Enter a");
scanf("%d",&a);
printf("Enter b");
scanf("%d",&b);
printf("Even/Odd Numbers from %d to %d are",a,b);
printEvenOdd(a,b); 
return 0;
}
void printEvenOdd(int c,int d)
{
if(c>d)
return;
printf("%d",c);
printEvenOdd(c+2,d);
}
