// PROGRAM 19 TO 30 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (START) --------------------->
#include<stdio.h>
void main(){
    int custId;
    char custName[10];
    float unit, unitCost, amount, surcharge, sAmount;

	printf("Enter the Customer Name : ");
    scanf("%s", &custName);
    printf("Enter the Customer ID : ");
    scanf("%d", &custId);
    printf("Enter the Unit consumed by the Customer : ");
    scanf("%f", &unit);


    if(unit < 350){
        unitCost = 1.20;
        amount = unit * unitCost;
        printf("\nper Unit Rate : %.2f", unitCost);
        printf("\nTotal amount to be paid is : %.2f", amount);
    }
    else if(unit >= 350 && unit < 600){
            unitCost = 1.50;
            amount = unit * unitCost;
            printf("\nper Unit Rate : %.2f", unitCost);
            printf("\nTotal amount to be paid is : %.2f", amount);
    }
    else if(unit >= 600 && unit < 800){
            unitCost = 1.80;
            amount = unit * unitCost;
            printf("\nper Unit Rate : %.2f", unitCost);
            printf("\nTotal amount to be paid is : %.2f", amount);
    }
    else if(unit >= 800){
        unitCost = 2.00;
        amount = unit * unitCost;
        surcharge = amount * 0.18;
        sAmount = surcharge + amount;
        printf("\nper Unit Rate : %.2f", unitCost);
        printf("\nTotal Bill to be paid is : %.2f", amount);
        printf("\nTotal Bill with 18% surcharge to be paid is : %.2f", sAmount);
    }
    else{
    	amount < 256;
    	printf("the minimum amount should be of Rs. 256/- ");
	}

}
// PROGRAM 19 TO 30 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (END) --------------------->