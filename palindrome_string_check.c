#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len,flag=1,j;
    printf("Enter a string:");
    fgets(str,100,stdin);
    len = strlen(str)-2;
    for(int i=0,j=0;i-2<len,j<=len;i++,j++){
        //printf("%c - %c\n",str[i],str[len-i]);
        if (str[i]!=str[len-i])
        	flag=0;
    }
    if (flag==1)
    	printf("palindrome");
    if (flag==0)
    	printf("NOT palindrome");
}
