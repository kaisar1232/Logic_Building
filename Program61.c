//it get input from user and print number is greter than 5 from number
//input : 821396
//output : 3

#include<stdio.h>

int Count(int iNo) 
{
    int icount = 0;
    int idigit = 0;
    
    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        idigit = iNo % 10;
        if (idigit > 5) 
        {
            icount++;
        }
        iNo = iNo / 10; 
    }
    return icount;
}

int main() {
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    iRet = Count(iValue);

    printf("Number of digits greater than 5: %d\n", iRet);
    
    return 0;
}
