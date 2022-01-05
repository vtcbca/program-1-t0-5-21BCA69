/* Armstrong Number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0,a;
	clrscr();
	printf("\n Enter a Number:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		s=n%10;
		sum=sum+(s*s*s);
		n=n/10;
	}
	if(sum==a)
		printf("\n Number is Armstrong");
	else
		printf("\n Number is Not Armstrong");
	getch();
}