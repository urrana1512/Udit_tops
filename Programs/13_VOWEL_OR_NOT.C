// PROGRAM 13 : CHARACTER IS VOWEL OR NOT - (START) --------------------->
#include<stdio.h>
void main(){
    char x;

    printf("Enter the one alphabet : ");
    scanf("%c", &x);

    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
        printf("%c is Vowel.", x);
    }
    else{
        printf("%c is not Vowel!", x);
    }
}
// PROGRAM 13 : CHARACTER IS VOWEL OR NOT - (END) --------------------->
