// PROGRAM 17 : CHECK_PROFIT_LOSS - (START) --------------------->
#include<stdio.h>
void main(){
    int costPrice, sellPrice, amount;
     printf("Enter the Cost Price : ");
     scanf("%d", &costPrice);
     printf("Enter the Selling Price : ");
     scanf("%d", &sellPrice);

     if(costPrice < sellPrice){
        amount = sellPrice - costPrice;
        printf("Profit = %d", amount);
     }
     else if(costPrice > sellPrice){
        amount = costPrice - sellPrice;
        printf("Loss : %d", amount);
     }
     else{
        printf("No profit, No loss");
     }
}
// PROGRAM 17 : CHECK_PROFIT_LOSS - (END) --------------------->