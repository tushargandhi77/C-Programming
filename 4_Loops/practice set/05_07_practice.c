#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        printf("8 X %d = %d\n",i,8*i);
        sum+=8*i;
    }
    printf("The sum of multipication table of 8 is %d\n ",sum);
    return 0;
}