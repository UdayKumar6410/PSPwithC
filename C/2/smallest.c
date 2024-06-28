#include<stdio.h>
int main() 
{
 int a, b, c;

 printf("Enter three numbers :");
 scanf("%d%d%d", &a, &b, &c);
 if (a < b && a < c) {
 printf("Smallest is :%d", a);
 } else if (b < c) {
 printf("Smallest is :%d", b);
 } else {
 printf("Smallest is :%d", c);
 }
 return 0;
}
