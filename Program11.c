//Accept one number from user  check whether no is in range 30 to 50

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(unsigned int iNo)
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
    unsigned int ivalue = 0;

    bool bRet = false;

    printf("Enter Number: \n");
    scanf("%d",&ivalue);

    bRet = CheckRange(ivalue);

    if(bRet == true)
    {
        printf("%d is in the range 30 and 50 \n",ivalue);
    }
    else
    {
        printf("%d is not in the range 30 and 50 \n",ivalue);
    }
    
    return 0;    

}