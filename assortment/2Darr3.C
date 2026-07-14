#include<stdio.h>
#include<conio.h>

void main(){
	int arr[10][10],c,r,i,j;
	clrscr();
	printf("enter arr num of raw: ");
	scanf(" %d",&r);
	printf("enter arr num of col: ");
	scanf(" %d",&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("arr num [%d][%d] :",i,j);
		scanf(" %d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("2D arr :\n");
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
		printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	getch();
}