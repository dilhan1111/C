#include<stdio.h>
int fact(int x);
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("factorial(%d) = %d",n,fact(n));
}
int fact(int x){
if (x>=1){
    	x= x*fact(x-1);
    	return x;}
else
	return 1;
}
