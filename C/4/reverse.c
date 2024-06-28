#include<stdio.h>
int main()
{
char str[20],revstr[20];
printf("enter the name: ");
gets(str);
int count=0;
for(int i=0;str[i]!='\0';i++)
{
count++;
}
printf("length of string is %d\n",count);
printf("reverse of string str is:\n");
for(int i=0;i<=count;i++)
{
    revstr[i]=str[count-i-1];
printf("revstr[%i]= %c\n",i,revstr[i]);
}
printf("a new string is %s",revstr);
return 0;
}
