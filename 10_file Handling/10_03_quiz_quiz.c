#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("werty.txt","r");
    if(ptr==NULL){
        printf("The file is does not exist\n");
    }
    else{
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("The value of num is %d\n",num);
    }
    return 0;
}