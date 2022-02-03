#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int w=0,len = strlen(str);
    if (len==1)
    	w=0;
    else{
	    for(int i=0;i<len;i++){
		if (str[i] == ' ')
		    w++;
	    }w++;}

    printf("Number of words = %d",w);
}
