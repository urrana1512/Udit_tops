// PROGRAM 12 : GIVEN YEAR IS LEAP YEAR OR NOT - (START) --------------------->
#include<stdio.h>
void main(){
    int y;
     printf("Enter a Year : ");
     scanf("%d", &y);

     if(y % 4 == 0){
        printf("%d is Leap year.", y);
     }
     else{
        printf("%d is not Leap year!", y);
     }
}
// PROGRAM 12 : GIVEN YEAR IS LEAP YEAR OR NOT - (END) --------------------->
