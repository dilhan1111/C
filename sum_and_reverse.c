#include<stdio.h>
void main(){
    int n,sum=0,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        sum = sum+rem;
        rev = rev*10 + rem;
        n=n/10;
    }
    printf("sum = %d\n",sum);
    printf("reverse = %d",rev);
}
