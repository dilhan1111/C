#include<stdio.h>
int main(){
    FILE *odd,*even;
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    
    odd = fopen("odd.data","a");
    even = fopen("even.data","a");
    
    fprintf(even,"%s","Even numbers\n------------\n");
    fprintf(odd,"%s","odd numbers\n-----------\n");
    
    for(int i=1;i<=n;i++){
        if (i%2==0)
            fprintf(even,"%d\n",i);
        else
            fprintf(odd,"%d\n",i);
    }
    
    fclose(odd);
    fclose(even);
    
}
