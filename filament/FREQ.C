#include<stdio.h>
#include<conio.h>

void main(){
	char str[50];
	int i,j,caunt;

    clrscr();

    printf("Enter a name: ");
    scanf("%s",str);

    printf("\nFreq of every letter:\n");

    for(i=0; str[i]!='\0';i++){
	caunt = 0;

	for(j=i; str[j]!='\0'; j++){
	       if(str[i]==str[j]){
		caunt++;
		}

	    }
	for(j=0;j<i;j++){
		if( str[j]==str[i]){
		 break;
		 }
	}

	if(j==i){
	printf("%c = %d\n", str[i], caunt);
	}
    }

    getch();
}