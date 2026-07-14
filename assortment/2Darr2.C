#include<stdio.h>
#include<conio.h>

void main(){
	int arr[12][12],row,col,i,j,n;
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

	n = arr[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		  if(arr[i][j]>n){
		     n = arr[i][j];
		   }
		}
	}
	printf("largest num : %d",n);
	getch();
}