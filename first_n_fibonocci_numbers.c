#include<stdio.h>
int main(){
    int f1=0,f2=1,i,n,next;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("%d ",f2);
        next = f1+f2;
        f1=f2;
        f2=next;
    }
}
