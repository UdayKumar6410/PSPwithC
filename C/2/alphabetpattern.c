#include <stdio.h>
int main() 
{
int i,j;
char x,alp='a';
printf("enter uppercase character");
scanf("%c",&x);
for(i=1;i<=(x-'a'+1);++i) 
{
for(j=1;j<=i;++j) 
{
printf("%c",alp);
}
++alp;
printf("\n");
}
return 0;
}
