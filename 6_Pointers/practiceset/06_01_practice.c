#include<stdio.h>

int main(){
    int a=6;
    int *ptr=&a;
    printf("The address of variable is %u\n",&a);
    printf("The address of variable is %u\n",*ptr);
    printf("The address of variable is %u\n",*(&a));

    return 0;
}