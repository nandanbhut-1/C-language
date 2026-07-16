#include<stdio.h>
#include<conio.h>

void divid(int);

void main(){
	int n;
	clrscr();
	printf("enter any num :");
	scanf(" %d",&n);
	divid(n);
	getch();
}

void divid(a){
	if(a%3==0 && a%5==0){
		printf("your value can divid by 3 & 5");
	}else{
		printf("your value can  not divid by 3 & 5");
	}
}