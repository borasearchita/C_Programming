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

//////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer,Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 04/10/2026
// Author        : Archita Rajendra Borase
//
//////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;  //Business logic

    return iAns;
}

///////////////////////////////////////////////////
//
// Entry Point of the application
//
//////////////////////////////////////////////////
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);
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

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;  //Business logic

    return iAns;
}

int main()

{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);
    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);
    

    return 0;
}
