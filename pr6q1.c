#include<stdio.h>
void main(){
	int i,j;
	char a[40];
	char b[40];
	int z=0;
	printf("Enter your name:");
	scanf("%s",&a);
	for(i=0;a[z]!='\0';i++){
		z++;
	}
	j=z-1;
	if(a[z-2]==a[z-j]){
		printf("Word is Palindrome");
	}else{
		printf("Word is not Palindrome");
	}
}
