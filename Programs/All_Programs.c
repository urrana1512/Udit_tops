// PROGRAM 1 : DYNAMIC CALCULATOR - (START) --------------------->
#include<stdio.h>
void main(){
    int a,b; //DATA MEMBER

    printf("Enter the first value : ");
    // scanf() IS USED FOR GETTING THE VALUE DYNAMICALLY FROM THE USER
    scanf("%d", &a);   //& IS DEFINES THE ADDRESS OF VARIABLE

    printf("Enter the second value : ");
    scanf("%d", &b);

    printf("A : %d", a);
    printf("/tB : %d", b);  // "/t" used for spacing

    printf("/nAddition : %d", a+b);
    printf("/nSubstraction : %d", a-b);
    printf("/nMultiplication : %d", a*b);
    printf("/nDivision : %.2f(float)", a/b);  //TYPE CASTING
}
// PROGRAM 1 : DYNAMIC CALCULATOR - (END) <---------------------



// PROGRAM 2 : DAYS TO YEAR CONVERTER - (START) --------------------->
#include<stdio.h>
void main(){
    int n;
    printf("Enter Days : ");
    scanf("%d", &n);

    printf("/n Years are %.2f(float)", n/365);   // TYPE CASTING
}
// PROGRAM 2 : DAYS TO YEAR CONVERTER - (END) <---------------------



// PROGRAM 3 : YEAR TO DAYS CONVERTER - (START) --------------------->
#include<stdio.h>
void main(){
    int n;
    printf("Enter Years : ");
    scanf("%d", &n);

    printf("/n Days are %d", n*365);   
}
// PROGRAM 3 : YEAR TO DAYS CONVERTER - (END) <---------------------



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



// PROGRAM 5 : IF-ELSE LADDER STATEMENT - (START) --------------------->
#include<stdio.h>
void main(){
    float n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if(n == 0){
        printf("Zero..!", n);
    }

    else if(n > 0){
        printf("Positive..!", n);
    }

    else {
        printf("Negative..!", n);
    }
}
// PROGRAM 5 : IF-ELSE LADDER STATEMENT - (END) <---------------------



// PROGRAM 6 : IF-ELSE LADDER STATEMENT - (START) --------------------->
#include<stdio.h>
void main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    if(n == 0){
        printf("%d is zero..!", n);
    }

    else if(n % 2 == 0){
        printf("%d is even..!", n);
    }

    else {
        printf("%d is odd..!", n);
    }
}
// PROGRAM 6 : IF-ELSE LADDER STATEMENT - (END) <---------------------



// PROGRAM 7 : NESTED IF-ELSE STATEMENT - (START) --------------------->
#include<stdio.h>
void main(){
    int n1, n2, n3;
     printf("Enter Number 1 : ");
     scanf("%d", &n1);
     printf("Enter Number 2 : ");
     scanf("%d", &n2);
     printf("Enter Number 3 : ");
     scanf("%d", &n3);

     if (n1 > n2)
     {
        if (n1 > n3)
        {
            printf("%d is Greatest", n1);
        }
        else{
            printf("%d is Greatest", n3);
        }
        
     }
     else{
        if (n2 > n3)
        {
            printf("%d is Greatest", n2);
        }
        else{
            printf("%d is Greatest", n3);
        }
        
     }
    
}
// PROGRAM 7 : NESTED IF-ELSE STATEMENT - (END) --------------------->



// PROGRAM 8 : NESTED IF-ELSE STATEMENT - (START) --------------------->
#include<stdio.h>
void main(){
    int n1, n2, n3;
     printf("Enter Number 1 : ");
     scanf("%d", &n1);
     printf("Enter Number 2 : ");
     scanf("%d", &n2);
     printf("Enter Number 3 : ");
     scanf("%d", &n3);

     if(n1 > n2 && n1 > n3){
        printf("%d is Greatest", n1);
     }
     else if(n2 > n1 && n2 > n3){
        printf("%d is Greatest", n2);
     }
     else{
        printf("%d is Greatest", n3);
     }
    
}
// PROGRAM 8 : NESTED IF-ELSE STATEMENT - (END) --------------------->



// PROGRAM 9 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (START) --------------------->
#include<stdio.h>
void main(){
    int n;
    printf("Enter Marks : ");
    scanf("%d", &n);

    if(n >= 33 && n < 100){
        printf("Student is PASS...");
    }
    else if(n > 100){
        printf("Undefined...");
    }
    else{
        printf("Student is Falied...");
    }
}
// PROGRAM 9 : ACCEPT MARKS FROM USER AND CHECK PASS OF FAIL - (END) --------------------->



// PROGRAM 10 : READ TEMPERATURE - (START) --------------------->
#include<stdio.h>
void main(){
    int Temp;

    printf("Enter Temperature : ");
    scanf("%d", &Temp);

    if(Temp <= 0){
        printf("%d Freezing Weather", Temp);
    }
    else if(Temp > 0 && Temp <= 10){
        printf("%d Very Cold Weather", Temp);
    }
    else if(Temp > 10 && Temp <= 20){
        printf("%d Cold Weather", Temp);
    }
    else if(Temp > 20 && Temp <= 30){
        printf("%d Noraml Temperature", Temp);
    }
    else if(Temp > 30 && Temp <= 40){
        printf("%d Its Hot", Temp);
    }
    else{
        printf("%d Its Very Hot", Temp);
    }
}
// PROGRAM 10 : READ TEMPERATURE - (START) --------------------->



// PROGRAM 11 : CHECK GIVEN TWO INTEGERS ARE EQUAL OR NOT - (START) --------------------->
#include<stdio.h>
void main(){
    int a, b;

    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    if(a == b){
        printf("%d and %d are Equal...", a,b);
    }
    else{
        printf("%d and %d are not Equal !!", a,b);
    }
}
// PROGRAM 11 : CHECK GIVEN TWO INTEGERS ARE EQUAL OR NOT - (END) --------------------->



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



// PROGRAM 14 : HEIGHT OF PERSON IN CENTIMETER & CATEGORIZED THE PERSON - (START) --------------------->
#include<stdio.h>
void main(){
    float height;

    printf("Enter the Height in Centimeter : ");
    scanf("%f", &height);

    if(height < 150.0){
        printf("drawf.");
    }
    else if(height >= 150.0 && height <= 165.0){
        printf("Avarage Height.");
    }
    else if(height > 165.0 && height <= 195.0){
        printf("Tall.");
    }
    else{
        printf("Abnormal!!");
    }
}
// PROGRAM 14 : HEIGHT OF PERSON IN CENTIMETER & CATEGORIZED THE PERSON - (END) --------------------->



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



// PROGRAM 16 : CHECK_TRIANGLE_FORMED_WITH_GIVEN_VALUES - (START) --------------------->
#include<stdio.h>
void main(){
    int a1, a2, a3;

    printf("Eneter the 1st value of angle : ");
    scanf("%d", &a1);

    printf("Eneter the 2nd value of angle : ");
    scanf("%d", &a2);

    printf("Eneter the 3rd value of angle : ");
    scanf("%d", &a3);

    if(a1 + a2 + a3 == 180){
        printf("This is Triangle.", a1, a2, a3);
    }
    else{
        printf("This is not Triangle.");
    }

}
// PROGRAM 16 : CHECK_TRIANGLE_FORMED_WITH_GIVEN_VALUES - (END) --------------------->



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



// PROGRAM 18 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (START) --------------------->
#include<stdio.h>
void main(){
    int custId;
    char custName[10];
    float unit, unitCost, amount;

	printf("Enter the Customer Name : ");
    scanf("%s", &custName);
    printf("Enter the Customer ID : ");
    scanf("%d", &custId);
    printf("Enter the Unit consumed by the Customer : ");
    scanf("%f", &unit);


    if(unit < 350){
        unitCost = 1.20;
    }
    else if(unit >= 350 && unit < 600){
            unitCost = 1.50;
    }
    else if(unit >= 600 && unit < 800){
            unitCost = 1.80;
    }
    else{
        unitCost = 2.00;
    }
    
    amount = unit * unitCost;
        printf("per Unit Rate : %.2f", unitCost);
        printf("\nTotal amount to be paid is : %.2f", amount);
}
// PROGRAM 18 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (END) --------------------->



// PROGRAM 19 : ENTER_MONTH_NUMBER_AND_DISPLAY_NUMBER_OF_DAYS - (START) --------------------->
#include<stdio.h>
void main(){
    int monthNumber;

    printf("Enter the number of Month : ");
    scanf("%d", &monthNumber);

    if(monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12){
        printf("31 Days...");
    }
    else if(monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11 ){
        printf("30 Days...");
    }
    else if (monthNumber == 2)
    {
        printf("28/29 Dyas");
    }
    else{
        printf("Invalid Input! Please enter Month number between 1-12.");
    }
    
}


#include<stdio.h>
void main(){
    int monthNumber, days;

    printf("Enter the number of Month : ");
    scanf("%d", &monthNumber);

    if(monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || monthNumber == 12){
        days = 31;
    }
    else if(monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11 ){
        days = 30;
    }
    else if (monthNumber == 2)
    {
        days = 28/29;
    }
    else{
        printf("Invalid Input! Please enter Month number between 1-12.");
    }
    printf("Days : %d", days);
    
}
// PROGRAM 19 : ENTER_MONTH_NUMBER_AND_DISPLAY_NUMBER_OF_DAYS - (END) --------------------->



// PROGRAM 20 : ENTER_WEEK_NUMBER_AND_PRINT_WEEK_DAY - (START) --------------------->
#include<stdio.h>
void main(){
    int weekNumber;

    printf("Enter the number of Week : ");
    scanf("%d", &weekNumber);

    if(weekNumber == 1){
        printf("Monday");
    }
    else if(weekNumber == 2){
        printf("Tuesday");
    }
    else if(weekNumber == 3){
        printf("Wednesday");
    }
    else if(weekNumber == 4){
        printf("Thursday");
    }
    else if(weekNumber == 5){
        printf("Friday");
    }
    else if(weekNumber == 6){
        printf("Saturday");
    }
    else if(weekNumber == 7){
        printf("Sunday");
    }
    else{
        printf("Invalid Input! Please enter Week number between 1-7.");
    }
    
}
// PROGRAM 20 : ENTER_WEEK_NUMBER_AND_PRINT_WEEK_DAY - (END) --------------------->



// PROGRAM 21 : ENTER_MONTH_NUMBER_AND_PRINT_MONTH_NAME - (START) --------------------->
#include<stdio.h>
void main(){
    int monthNumber;

    printf("Enter the number of Week : ");
    scanf("%d", &monthNumber);

    if(monthNumber == 1){
        printf("January");
    }
    else if(monthNumber == 2){
        printf("February");
    }
    else if(monthNumber == 3){
        printf("March");
    }
    else if(monthNumber == 4){
        printf("April");
    }
    else if(monthNumber == 5){
        printf("May");
    }
    else if(monthNumber == 6){
        printf("June");
    }
    else if(monthNumber == 7){
        printf("July");
    }
    else if(monthNumber == 8){
        printf("August");
    }
    else if(monthNumber == 9){
        printf("September");
    }
    else if(monthNumber == 10){
        printf("October");
    }
    else if(monthNumber == 11){
        printf("November");
    }
    else if(monthNumber == 12){
        printf("December");
    }
    else{
        printf("Invalid Input! Please enter month number between 1-12.");
    }
}
// PROGRAM 21 : ENTER_MONTH_NUMBER_AND_PRINT_MONTH_NAME - (END) --------------------->




// PROGRAM 22 : ELECTRICITY_BILL_WITH_ADDITIONAL_SURCHARGE - (START) --------------------->
#include<stdio.h>
void main()
{
	int Cid;
	float Unit,amt,Ucost,surcharge, Tamt;
    char Name[20];

	printf("eneter customer Id = ",Cid);
	scanf("%d",&Cid);
	
	printf("eneter customer Name = ",Name);
	scanf("%s",Name);
	
	printf("eneter customer Unit = ",Unit);
	scanf("%f",&Unit);
		
    if(Unit<50){
        Ucost = 0.50;
    }
    else if(Unit>=50 && Unit<100){
        Ucost = 0.75;
    }
    else if(Unit>=100 && Unit<250){
        Ucost = 1.20;
    }
    else{
        Ucost = 1.50;
    }
 
    amt = Unit*Ucost;
    surcharge = amt*0.20;
    Tamt =  surcharge+amt;

  printf("\ncustomer Id :%d\n",Cid);
    printf("customer Name :%s\n",Name);
      printf("unit Consume :%.2f\n",Unit);
        printf("unit Rate :%.2f\n",Ucost);
          printf("total Amount :%.2f\n",amt);
           printf("surcharge Amount :%.2f\n",surcharge);
            printf(" total with surcharge Amount :%.2f\n",Tamt);
}
// PROGRAM 22 : ELECTRICITY_BILL_WITH_ADDITIONAL_SURCHARGE - (END) --------------------->



// PROGRAM 23 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (START) --------------------->
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
        printf("\namount : %.2f", amount);
        printf("\nTotal amount with 18% surcharge to be paid is : %.2f", sAmount);
    }
}
// PROGRAM 19 TO 30 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (END) --------------------->
// PROGRAM 23 : CALCULATE_AND_PRINT_ELECTRICITY_BILL (END) --------------------->



// PROGRAM 23 : ODD_EVEN_USING_TERNARY_OPERATOR (START) --------------------->
#include<stdio.h>
void main(){
    int number;

    printf("Enter the Integer number : ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is Even number.", number) : printf("%d is Odd number.", number);
}
// PROGRAM 23 : ODD_EVEN_USING_TERNARY_OPERATOR (END) --------------------->



// PROGRAM 24 : DISPLAY THE VALUE - (START) --------------------->
#include<stdio.h>
void main(){
    int m, n;
    printf("Enter the value of m : ");
    scanf("%d", &m);

    if(m!=0){
        if(m > 0){
            n = 1;
        }
        else{
            n = -1;
        }
    }
    else{
        n = 0;
    }
    printf("The value of m = %d\n", m);
    printf("The value of n = %d\n", n);
}
// PROGRAM 24 : DISPLAY THE VALUE - (END) --------------------->



// PROGRAM 25 : ADMISSION CRITERIA - (START) --------------------->
#include<stdio.h>
void main(){
    int maths, phy, chem, total, mp;

    printf("ELIGIBILITY CRIATERIA FOR ADMISSION IS SHOW BELOW : ");
    printf("\nMarks : Maths >= 65");
    printf("\n        Physics >= 55");
    printf("\n        Chemistry >= 50");
    printf("\nTotal Marks in All 3 Subjects >= 190");
    printf("\nTotal Marks in Maths & Physics >= 140");

    printf("\n\n*****************************************************************\n\n");

    printf("Enter the Obtained Marks : Maths = ", maths);
    scanf("%d", &maths);
    printf("                           Physics = ", phy);
    scanf("%d", &phy);
    printf("                           Chemistry = ", chem);
    scanf("%d", &chem);

    printf("Total Marks in All 3 Subjects = %d\n", maths + phy + chem);
    printf("Total Marks in maths & Physics = %d\n", maths + phy);

//USING NESTED IF STATEMENT
    if(maths >= 65){
        if(phy >= 55){
            if(chem >= 50){
                if(maths + phy + chem >= 190){
                    if(maths + phy >= 140){
                        printf("\nStudent is Eligible for Admission to a Professional Course. ");
                    }
                    else{
                        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
                    }
                }
                else{
                    printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
                }
            }
            else{
                printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
            }
        }
        else{
            printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
        }
    }
    else{
        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
    }

//SHORT METHOD USING &&(AND) OPERATOR
    if(maths >= 65 && phy >= 55 && chem >= 50 && maths + phy + chem >= 190 && maths + phy >= 140){
		printf("\nStudent is Eligible for Admission to a Professional Course. ");
	}
    else{
        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
    }

}
// PROGRAM 25 : ADMISSION CRITERIA - (END) --------------------->



// PROGRAM 26 : CALCULATE FROSS SALARY - (START) --------------------->
#include<stdio.h>
void main(){
    float b_salary, g_salary, hra, da;

    printf("Enter the Basic Salary of an Employee : ");
    scanf("%f", &b_salary);
    

    if(b_salary <= 10000){
        hra = b_salary * 0.20;
        da = b_salary * 0.80;
    }
    else if(b_salary > 10000 && b_salary <= 20000){
        hra = b_salary * 0.25;
        da = b_salary * 0.90;
    }
    else{
        hra = b_salary * 0.30;
        da = b_salary * 0.95;
    }

	g_salary = b_salary + hra + da;
	
    printf("Gross Salary of an Employee = %.2f", g_salary);
}
// PROGRAM 26 : CALCULATE FROSS SALARY - (END) --------------------->