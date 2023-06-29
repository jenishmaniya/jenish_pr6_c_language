#include <stdio.h>
#include <string.h>
void main(){
	int i;
    char a[100];
    int f[300]={0}; 

    printf("Enter any word:");
    scanf("%s",a);

    for(i=0;i<strlen(a);i++) {
        f[a[i]]++; 
    }

    printf("Frequency of each letter:\n");
    for(i=0;i<300;i++) {
        if(f[i]!=0) {
            printf("%c=%d\n",i,f[i]); 
        }
    }
}
