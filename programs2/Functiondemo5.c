#include<stdio.h>
void Addition(int no1, int no2)
{
    int Result = 0;
    Result = no1 + no2;      //business logic
    printf("Addition is : %d\n",Result);
}

int main()
{    
    int value1 = 0, value2 = 0;
    printf("Enter first number : \n");
    scanf("%d",&value1);

    printf("Enter second number : \n");
    scanf("%d",&value2);

    Addition(value1, value2);

    return 0;
}