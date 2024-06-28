#include <stdio.h>
int main()
{

	float bs, da, hra, ta, pf, it, net;
	printf("enter bs,hra,ta");
	scanf("%f%f%f",&bs,&hra,&ta);
	da = (bs*12)/100;

	pf = (bs*14)/100;
	
	it = (bs*15)/100;
	
	net = bs + da + hra + ta - (pf+it);
	printf("Enter da is %f",da);
	
	printf("Enter pf is %f",pf);
	
	printf("Enter it is %f",it);
		
	printf("Enter net is %.2f",net);
	
	
	return 0;
}
