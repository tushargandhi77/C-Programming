#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=90){
        printf("You are above 90,you cannot drive\n");
    }
    else{
        printf("you can drive");
    }

    if(age==50){
        printf("Half century\n");
    }
    return 0;
}