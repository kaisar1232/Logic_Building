#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4096;
    unsigned int iResult = 0;

    printf("Enter Number \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        printf("13th but is ON\n");
    }
    else
    {
        printf("13th but is OFF\n");
    }
    
    return 0;
}
/*
    ---------------------------------
    OP1     OP2     &       |       ~
    ---------------------------------
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
    ---------------------------------

*/
