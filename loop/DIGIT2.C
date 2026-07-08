#include<stdio.h>
#include<conio.h>

void main(){
	int n,first,last;
	clrscr();
	printf("enter num :");
	scanf(" %d",&n);
	last = n%10;
	while(n>=10){
		n=n/10;
	}
	  first = n;x
	printf("tatal num offirst and last digit :%d ",first+last);
	getch();
}