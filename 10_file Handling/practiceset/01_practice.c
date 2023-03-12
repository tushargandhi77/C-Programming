#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr = fopen("practice.txt","r");
    fscanf(ptr,"%d %d %d",&a, &b ,&c);
    printf("The value of a b c is %d %d %d \n",a,b,c);
    return 0;
}