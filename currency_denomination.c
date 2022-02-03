#include<stdio.h>
void main(){
    int c,x,a[10]={2000,500,100,50,20,10,5,2,1};
    
    printf(">>");
    scanf("%d",&c);
    for(int i=0;i<9;i++){
        x = c/a[i];
        printf("%d --> %d\n",a[i],x);
        c=c-(x*a[i]);
        x=0;
    }
}
