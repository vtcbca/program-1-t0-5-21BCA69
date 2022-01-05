/* Write a Program to Enter Any Number And Print Reverse Number
Date:24/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,rev=0;
	clrscr();
	printf("\n Enter Value:");
	scanf("%d",&num);
	while(num>0)
	{
	  i=num%10;
	  rev=rev*10+i;
	  num=num/10;
	}
	printf("\n Reverse Number: %d ",rev);
	getch();
}