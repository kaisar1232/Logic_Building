#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet=CountOne(iValue);
    
    printf("Number of i are : %d\n",iRet);

    return 0;
}
