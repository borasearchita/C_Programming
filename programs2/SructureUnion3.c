#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;
    float f;
    double d;
};

int main()
{
    struct Demo dobj1;
    dobj1.i = 11;
    dobj1.f = 3.14;
    dobj1.d = 9.12345;


    printf("%d\n",dobj1.i);
    printf("%f\n",dobj1.f);
    printf("%lf\n",dobj1.d);

    return 0;
}