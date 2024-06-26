// PROGRAM 4 : SWAPPING VALUES OF VARIABLES - (START) --------------------->
#include<stdio.h>
void main(){
    int a,b;

    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);

    printf("Before Swapping A value is %d", a);
    printf("Before Swapping B value is %d", b);

    // USING 3RD VARIABLE
    int temp = a;   // temp MEANS Temporary VARIABLE
    int a = b;
    int b = temp;

    // WITHOUT USING 3RD VARIABLE
    // (+ -)METHOD
    int a = a + b;
    int b = a - b;
    int a = a - b;

    // (* /)METHOD
    int a = a * b;
    int b = a / b;
    int a = a / b;

    printf("After Swapping A value is %d", a);
    printf("After Swapping B value is %d", b);    
}
// PROGRAM 4 : SWAPPING VALUES OF VARIABLES - (END) <---------------------