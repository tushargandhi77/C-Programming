#include<stdio.h>

int main(){
    int i,sum=0,n=10;

    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The value of sum (1 to 10) is %d\n",sum);
    return 0;
}