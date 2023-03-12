#include<stdio.h>
int series(int x);

int main(){
    int a=11;
    printf("The sum of first %d natural number is %d",a,series(a));
    
    return 0;
}

int series(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+series(x-1);
    }
}