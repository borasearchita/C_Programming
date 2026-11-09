/*
    Step 1:  Understand the problem statement
    Step 2:  Write the Algorithm
    Step 3:  Decide the programming language
    Step 4:  Write the program
    Step 5:  Test the program
*/

///////////////////////////////////////////////////////////////
//
//      Step 1:  Understand the problem statement
//              User is going to enter any 2 integers and we have
//              to perform addition.
//
///////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////
//   Step 2:  Write the Algorithm
/*
START
Accept first number as no1
Accept second number as no2
Creeate the variable as Ans to store the result
Perform the addition and store the result into Ans
Display the result from Ans
*/
////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////
// Step 3; Decide language 
// We select C programming 
//
////////////////////////////////////////////////////////////////


////////////////////////////////////////////
//      step 4 : write the program
//
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int iValue1 , iValue2 , iResult ;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);
    


    iResult = iValue1 + iValue2;   //Business logic


    return 0;
}