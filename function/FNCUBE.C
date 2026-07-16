#include<stdio.h>
#include<conio.h>

void cube(int);

void main(){
	int n;
	clrscr();
	printf("enter any num :");
	scanf("%d",&n);
	cube(n);
	getch();
}

void cube(m){
	int a;
	a=m*m*m;
	printf("\ncube of your num : %d",a);
}