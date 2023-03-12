#include<stdio.h>
void slice(char *st, int m, int n){
    int i=0;
    while(i<=n){
        st[i]=st[i+m];
        i++;
    }
}

int main(){
    char st[]="Harry";
    slice(st,1,4);
    printf("%s",st);
    return 0;
}