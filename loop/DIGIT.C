#include<stdio.h>
#include<conio.h>

void main(){
	int n,count=0;
	clrscr();
	printf("enter num of digit :");
	scanf(" %d",&n);
	while(n!=0){
		count++;
		n=n/10;
	}

	printf("tatal num of digit :%d ",count);
	getch();
}