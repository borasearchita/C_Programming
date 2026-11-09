#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer,Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 04/10/2026
// Author        : Archita Rajendra Borase
//
//////////////////////////////////////////////////////////////

int Addition(int iNo1, //First input
     int iNo2   //Second input
    )
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


    /*
    Step 1:  Understand the problem statement
    Step 2:  Write the Algorithm
    Step 3:  Decide the programming language
    Step 4:  Write the program
    Step 5:  Test the program
*/

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////



int main()

{
    int iValue1 = 0 , iValue2 = 0 , iResult = 0 ;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);
    

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test Cases 
//--------------------------------------------------
//   input 1       input 2      Output
//--------------------------------------------------
//      10           11            21
//      11           0             11
//      0            11            11
//      20           -9            11
//--------------------------------------------------
//
///////////////////////////////////////////////////