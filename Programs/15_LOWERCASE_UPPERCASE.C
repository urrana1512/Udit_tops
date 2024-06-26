// PROGRAM 15 : CHECK_UPPERCASE_LOWERCASE_DIGIT_SPECIALCHAR - (START) --------------------->
#include<stdio.h>
void main(){
    char ch;
     printf("Enter : ");
     scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is in Uppercase.", ch);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("%c is in Lowercase.", ch);

    }
    else if(ch >= '0' && ch <= '9'){
        printf("%c is Digit.", ch);
    }
    else
    {
        printf("%c is Special character.", ch);
        
    }
}
// PROGRAM 15 : CHECK_UPPERCASE_LOWERCASE_DIGIT_SPECIALCHAR - (END) --------------------->