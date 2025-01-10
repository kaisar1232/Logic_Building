#include <stdio.h>

int CountFactors(int iNo)
{
    int icnt = 0;
    int iCount = 0;
    
    for(icnt = 1; icnt < iNo ; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            iCount++;
        }
    }
    return iCount; // Return outside of the loop
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Number Of factors: %d \n", iRet);   
    
    return 0;
} 
