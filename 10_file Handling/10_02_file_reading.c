#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Harry.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("The value of num is %d\n",num);
    
    return 0;
}