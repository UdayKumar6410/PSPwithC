#include<stdio.h>
int main()
{
int a[1000],i,n,key;
printf("enter size of the array");
scanf("%d",&n);
printf("enter elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}     
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("element found");
return 0;		 
}
}
printf("element  not  found");
}
