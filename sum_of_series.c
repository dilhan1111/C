#include<stdio.h>
#include<math.h>

void main(){
    float sum=0,x;
    for(int i=1;i<=10;i++){
        x = (pow((1/i),i));
        sum = sum+x;
    }
    printf("sum = %d",sum);
}
