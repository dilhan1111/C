#include<stdio.h>
void main(){
    int yr;
    printf("Enter a year:");
    scanf("%d",&yr);
    if (yr%4==0){
        if((yr%100==0)&&(yr%400!=0))
            printf("%d is Not a leap year",yr);
        else
            printf("%d IS A LEAP YEAR",yr);}
    else
        printf("%d is Not a leap year",yr);
    }

