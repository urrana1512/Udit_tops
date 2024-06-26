// PROGRAM 9 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (START) --------------------->
#include<stdio.h>
void main(){
    int n;
    printf("Enter Marks : ");
    scanf("%d", &n)

    if(n >= 33 && n < 100){
        printf("Student is PASS...");
    }
    else if(n > 100){
        printf("Undefined...")
    }
    else{
        printf("Student is Falied...")
    }
}
// PROGRAM 9 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (END) --------------------->
