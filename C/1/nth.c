#include <stdio.h>
int main()
{
    int num, n, bit;
    printf("Enter any number");
    scanf("%d", &num);
    printf("Enter the number of the bit");
    scanf("%d", &n);
    bit = (num >> n) & 1;
    printf("The bit is %d",bit);
    return 0;
}
