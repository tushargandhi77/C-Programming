#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)malloc(7*sizeof(int));

    for(int i=0;i<7;i++){
        printf("Enter the %d number\n ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<7;i++){
        printf("The %d number is %d\n ",i,ptr[i]);
        
    }
    return 0;
}