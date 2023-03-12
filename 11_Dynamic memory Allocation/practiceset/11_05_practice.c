#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    // for(int i=0;i<10;i++){
    //     printf("enter the %d element \n",i);
    //     scanf("%d",&ptr[i]);
    // }
     for(int i=0;i<10;i++){
         ptr[i] = 7*(i+1);
        printf(" 7 X %d = %d \n",i+1,ptr[i]);
     }
    ptr = realloc(ptr,15*sizeof(int));

    printf("\nafter reallocation................\n\n");
    for(int i=0;i<15;i++){
         ptr[i] = 7*(i+1);
        printf(" 7 X %d = %d \n",i+1,ptr[i]);
     }
    

    return 0;
}