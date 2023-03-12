#include<stdio.h>

int main(){
    char ch;
    printf("Enter the charecter\n");
    scanf("%d",&ch);

    if(ch<=122 && ch>=97){
        printf("It is lower case\n");
    }
    else{
        printf("It is not lowe case\n");
    }
    return 0;
}