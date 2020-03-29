/************
 khushi ghimire
 29/03/2020
 **************/

#include <stdio.h>
//begin main
int main()
{
// initialise variables
int num1 =0, num2=0,selection=0;
char mychar;
while (1)// loop 
// print menu
{
printf("Calculatorv4/n");
printf("----------\n");
printf("1.Add\n");
printf("2. subtract\n");
printf("3.multiply\n");
printf("4.divide\n");
printf("5. remainders\n");
printf("--------\n");
printf("selection:\n");
scanf("%d" , & selection);




// ask for numbers

printf("enter the first number:");
scanf("%d", & num1);
printf("enter the second number:");
scanf("%d" , & num2);


// execute based on selection
// if else statement
if (selection==1) //add
{

printf("%d added to %d is equal to %d\n" , num1,num2 ,num1+ num2);

}
else if (selection== 2)// subtract
{
    printf("%d subtracted from %d is equal to %d\n" , num1, num2, num1-num2);

}
else 
printf(" Error: Select a value from 1 -5\n");

//ask user if they wants to do another calculaton

printf("Do you want to do another calculation (y/n):");
scanf("%s", &mychar);
if ((mychar == 'n') || (mychar == 'N'))

{

    printf("Thankyou for using the calculatior\n");
    return 0;

} // end if







} // end loop

return 0;

}
// end main
