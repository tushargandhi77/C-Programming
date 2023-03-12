#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    printf("How many intergers do you want\n");
    scanf("%d",&n);
    ptr = (float *)calloc(n, sizeof(float));
    // for(int i=0;i<n;i++){
    //     printf("Enter the value of %d element: \n",i);
    //     scanf("%f",&ptr[i]);
    // }
     for(int i=0;i<n;i++){
        printf(" the value of %d element: %f \n",i,ptr[i]);
    
    }
    return 0;
}