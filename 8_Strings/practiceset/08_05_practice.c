#include<stdio.h>
void copy(char *st2,char *st1 ){
    int i=0;
    while(i<5){
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
}


int main(){
    char st1[]="Harry";
    char st2[40];
    copy(st2,st1);
    printf("%s",st2);
    return 0;
}