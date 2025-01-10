//this application accepts number from user and
//checkes whether number if divisible by 4

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if (iNo % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number\n ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 4 \n",iValue);
    }
    else
    {
        printf("%d is not Divisible by 4 \n",iValue);
    }

    return 0;
}