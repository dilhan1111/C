#include<stdio.h>
int main(){
    int a[10],m,n,i,x,j;
    printf("Enter the order of 1st array:");
    scanf("%d",&m);
    printf("Enter elements to 1st array:\n");
    for(i=0;i<m;i++){
        printf(">>");
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the order of 2nd array:");
    scanf("%d",&n);
    printf("Enter elements to 2nd array:\n");
    for(i=m;i<n+n;i++){
        printf(">>");
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < n+m; ++i){
        for (j = i + 1; j < n+m; ++j){
            if (a[i] > a[j]){
                x = a[i];
                a[i] = a[j];
                a[j] = x;
         }
      }
   }
   printf("\n\nSorted Merged array:\n");
   for(i=0;i<m+n;i++){
       printf("%d ",a[i]);
   }
}
