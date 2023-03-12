#include<stdio.h>

int main(){
    FILE *ptr;
    ptr= ("c.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
    printf("%d",a*2);
    return 0;
}