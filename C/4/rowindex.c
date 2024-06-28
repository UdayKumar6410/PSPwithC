#include<stdio.h>  
int main() 
{      
int i=0,j=0,rowindex=2,max;    
int arr[2][3]={{50,6,8},{64,58,95}};     
for(i=0;i<2;i++)
{    
 for(j=0;j<3;j++)
 {    
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }    
}    
for ( j = 0; j < 3; j++)
       {
           if (arr[rowindex][j] > max)
           {
              max = arr[rowindex][j];
           }
        }
 printf("Largest element in row %d is %d \n", rowindex, max);
return 0;  
}
