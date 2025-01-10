//it get input from user print Sum of that input number
//input : 321
//output : 3 + 2 + 1 = 6

#include<stdio.h>

int SumDigits(int iNo) 
{
    int iSum = 0;
    int iDigit = 0;
    
    if (iNo < 0) 
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10; 
    }
    return iSum;
}

int main() {
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    iRet = SumDigits(iValue);

    printf("Sum of digits : %d\n", iRet);
    
    return 0;
}
