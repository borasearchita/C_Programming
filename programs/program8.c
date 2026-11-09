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
/////////////////////////////////////////////////
// Step 5 : Test the program
//
// Tested test Cases 
//--------------------------------------------------
//   input 1       input 2      Output
//--------------------------------------------------
//      10          11              21
//      11          0               11
//      0           11              11
//--------------------------------------------------
//
///////////////////////////////////////////////////////