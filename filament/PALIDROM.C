#include<stdio.h>
#include<conio.h>

void main(){
    char str[15],revstr[15];
    int i,j,flag=1,k;

    clrscr();

    printf("Enter a string: ");
    scanf("%s",str);


    for(i=0;str[i]!='\0';i++){

	j=0;

	for(k=i;k>=0;k--){
	  revstr[j]=str[k];
	  j++;
	}
	  revstr[j]='\0';

    }
	for(k=0;str[k]!=0;k++){
	      if(str[k]!=revstr[k]){
		 flag=0;
		 break;
	      }
	    }


    if(flag){
	printf("The string is Palindrome.");
	}
	 else{
	printf("The string is Not Palindrome.");
	 }
    getch();
}