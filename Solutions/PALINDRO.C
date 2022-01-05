#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,r=0,i;
	clrscr();
	printf("\n Enter Any Number:");
	scanf("%d",&n);
	s=n;
	while(s>0)
	{
		i=s%10;
		r=(r*10)+i;
		s=s/10;
	}
	if(n==r)
		printf("\n Palindrome Number");
	else
		printf("\n Not a Palindrome Number");
	getch();
}