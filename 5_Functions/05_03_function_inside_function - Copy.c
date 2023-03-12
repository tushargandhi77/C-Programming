#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
     goodmorning();
    
    return 0;
}

void goodmorning(){
    printf("Good morning harry\n");
    goodafternoon();

}
void goodafternoon(){
    printf("Good afternoon harry\n");
    goodnight();
}
void goodnight(){
    printf("Good night harry\n");
}