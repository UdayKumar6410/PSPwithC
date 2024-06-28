#include <stdio.h>
int main()  
{  
    int a,b,c;  
  
      
    printf("enter a,b angles of the triangle");  
    scanf("%d%d",&a,&b);  
  
     c = 180 - (a + b);  
  
    printf("third angle of the triangle c is %d",c);  
  
    return 0;  
}  
