//it prints even digit count from number
//input = 7896
//output = 2

#include<stdio.h>

int EvenDigit(int iNo)
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
        if(iDigit %2 ==0)
        {
            iCount ++;
        }
        iNo = iNo / 10; 
    }
    return iCount++;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = EvenDigit(iValue);

    printf("Number of even Digits Are : %d",iRet);
    
    return 0;
}

