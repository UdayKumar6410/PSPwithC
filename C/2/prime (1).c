#include <stdio.h>
int main() 
{
int num;        
printf("enter number");
scanf("%d",&num);    
int x=0;         
for(int i=2;i<num;i++)  
{
if(num%i==0)
x++;
}
if(x=0)          
{
printf("not a prime number");
}
else
{
printf("prime number");
}
return 0;
}
