#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if ((iNo >= 30) && (iNo <= 50))
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
    int ivalue = 0;

    bool bRet = false;

    printf("Enter Number: \n");
    scanf("%d",&ivalue);

    bRet = CheckRange(ivalue);

    if(bRet == true)
    {
        printf("Yes...\n");
    }
    else
    {
        printf("No...!\n");
    }
    
    return 0;    

}