#include <stdio.h>

void main(){
    int num,r,sum,temp;
    int a,b;

    printf("FROM: ");
    scanf("%d",&a);

    printf("TO: ");
    scanf("%d",&b);

        for(num=a;num<=b;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
}
