#include<stdio.h>
#include<conio.h>

void add(int n1,int n2);
void sub(int n1,int n2);
void mul(int n1,int n2);
void div(int n1,int n2);
void mod(int n1,int n2);


void main(){
	int n,n1,n2;
	clrscr();
	while(1){
		printf("press 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for %\n");
		printf("press 0 for exit\n\n");
		printf("enter your choice : ");
		scanf("%d",&n);

		switch(n){
		   case 0 :exit();
			   break;

		   case 1 :
			  printf("enter first num : ");
			  scanf("%d",&n1);
			  printf("enter second num : ");
			  scanf("%d",&n2);
			  add(n1,n2);
			  break;

		   case 2 :
			  printf("enter first num : ");
			  scanf("%d",&n1);
			  printf("enter second num : ");
			  scanf("%d",&n2);
			  sub(n1,n2);
			  break;

		   case 3 :
			  printf("enter first num : ");
			  scanf("%d",&n1);
			  printf("enter second num : ");
			  scanf("%d",&n2);
			  mul(n1,n2);
			  break;
		   case 4 :
			  printf("enter first num : ");
			  scanf("%d",&n1);
			  printf("enter second num : ");
			  scanf("%d",&n2);
			  div(n1,n2);
			  break;

		   case 5 :
			  printf("enter first num : ");
			  scanf("%d",&n1);
			  printf("enter second num : ");
			  scanf("%d",&n2);
			  mod(n1,n2);
			  break;


		   default :printf("\nnum is not exist\n");

			    break;
		}
	}

	getch();
}

void add(int n1,int n2){
	printf("addition is :%d\n\n",n1+n2);
}
void sub(int n1,int n2){
	printf("subtraction is :%d\n\n",n1-n2);
}
void mul(int n1,int n2){
	printf("multiple is :%d\n\n",n1*n2);
}
void div(int n1,int n2){
	printf("divison is :%d\n\n",n1/n2);
}
void mod(int n1,int n2){
	printf("moduler is :%d\n\n",n1%n2);
}
