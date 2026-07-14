#include<stdio.h>
#include<conio.h>

void main(){
	int arr[12][12],row,col,i,j,r,c,sum=0;
	clrscr();
	printf("enter your arr row: ",row);
	scanf(" %d",&row);
	printf("enter your arr col: ",col);
	scanf(" %d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("arr [%d][%d] :",i,j);
		scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("enter row num:");
	scanf(" %d",&r);
	sum=0;


	for(j=0;j<col;j++){
		printf("\t %d",arr[r][j]);
		sum=sum+arr[r][j];
	}
	 printf("\nsum of row %d : %d\n",r,sum);
	printf("\nenter col num:");
	scanf(" %d",&c);
	sum=0;
	for(i=0;i<row;i++){
		printf("\t %d",arr[i][c]);
		sum=sum +arr[i][c];
	}
	 printf("\n\nsum of col %d : %d\n",c,sum);
	getch();
}