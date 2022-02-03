#include<stdio.h>
void main(){
    int n,i,sum=0,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i!=0;i/=10){
        rem = i % 10;
        sum += (rem*rem*rem);
    }
    if (sum == n)
    	printf("%d is amstrong number.",n);
    else
    	printf("%d is Not amstrong number.",n);
}
