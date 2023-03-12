#include<stdio.h>

int main(){
    int i=1;
    do{
        printf("The %d natural number is %d\n",i,i);
        i++;
    }while(i<10);
    return 0;
}