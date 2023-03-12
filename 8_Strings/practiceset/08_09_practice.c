#include<stdio.h>
int occurence(char st[],char c){
    char *ptr = st;
    // int count = 0;
    while (*ptr!='\0')

    {
    if(*ptr==c){
        printf("yes occur\n");
    }
    else{
        printf("Not occur\n");
    }
     ptr++;
    }
    return 0;
    
}

int main(){
    char st[]="Harry";
    int count=occurence(st,'r');
    // printf("occurence = %d",count);
    return 0;
}