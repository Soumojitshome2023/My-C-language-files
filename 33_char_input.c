#include<stdio.h>

int main(){
    char s[34];
    
    printf("Enter your name: ");
    scanf("%s", s); // &s likte hoina ,because char ar khet-re s dia address bojhano hoi 

    printf("Your name is %s", s);
    return 0;
}