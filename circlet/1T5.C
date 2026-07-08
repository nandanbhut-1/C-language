#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,h;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf(" %d",j);
		}
		printf("\n");
	}
	 printf("\n");
	for(i=5;i>=1;i--){
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf(" %d",j);
		}
		printf("\n");
	    }

		 printf("\n");
	for(i=5;i>=1;i--){
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf(" %d",i);
		}
		printf("\n");
	    }

		 printf("\n");
	for(i=5;i>=1;i--){
		for(j=1;j<=5-i;j++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
		if(j%2!=0){
			printf("1 ");
			}else{
			printf("0 ");
				}
			}
		printf("\n");
		}
			printf("\n");

		for(i=1;i<=5;i++){
			for(j=1;j<=5-i;j++){
			printf("  ");
			}
			for(j=6-i;j<=5;j++){
			printf(" %d",j);
			}
			for(j=4;j>=6-i;j--){
			printf(" %d",j);
			}
			printf("\n");
		}
			printf("\n\n");
		 for(i=1;i<=5;i++){
			for(j=1;j<=i;j++){
			printf(" %d",j);
			}
			for(h=1;h<=2*(5-i);h++){
			printf("  ");
			}
			for(j=i;j>=1;j--){
			printf(" %d",j);
			}
			printf("\n");
		}


	getch();
}