#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    // char c= fgetc(ptr);
    // printf("The value of my charecter is %c\n",c);
    // 
    

    ptr = fopen("putcdemo.c","w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
    return 0;
}