//it prints digit count from number
//input = 7896
//output = 4

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    
    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    while(iNo > 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10; 
        iCount++;  
    }
    return iCount++;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits Are : %d",iRet);
    
    return 0;
}

