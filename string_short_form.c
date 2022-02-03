#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    int len = strlen(str);
    printf("%c",toupper(str[0]));
    for(int i=0;i<len;i++){
        if(str[i] == ' ')
            printf("%c",toupper(str[i+1]));
    }
}
