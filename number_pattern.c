#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(;n>0;n/=10){
        printf("%d\n",n);
    }
}
