#include<stdio.h>
int main(){
    int a[10][10],r,c,x,i,j;
    printf("Enter the order of matrix:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(">>");
            scanf("%d",&x);
            a[i][j]=x;
        }
    }
    printf("----------------------------\n");
    printf("Entered matrix:\n");
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("----------------------------\n");
    printf("transpose matrix:\n");
    
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
