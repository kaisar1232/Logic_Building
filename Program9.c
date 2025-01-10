//Accept One Number From User and check number is divisible by 3 && 5

#include<stdio.h>
#include<stdbool.h>

/* Algorithm
    Start
        Accept One Number as No
        Divide that number No by 3
        if reminder is 0
        Divide that number No by 5
        if reminder is 0
        then print number is divisible by 3 and 5
        otherwise display that it is not divisible by 3 & 5
    Stop        
*/
///////////////////////////////////////////
//  Function Name : CheckDivisible
//  Description :   Used to check whether number is divisible by 3 and 5
//  Input :         Integer
//  Output :        Boolean
//  Author :        Kaisar Attar
//  Date :          16/04/2024
//
///////////////////////////////////////////
int CheckDivisible(unsigned int iNo)
{
    if (((iNo % 3)==0) && ((iNo % 5)==0))
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    
    if(bRet == true)
    {
        printf("%d is divisible by 3 & 5 \n",iValue);
    }  
    else
    {
        printf("%d is not divisible by either 3 or 5 \n",iValue);
    } 

    return 0;
}
/*
    Logical && Operator

    First       Second      &&      ||
    true        true        true    true
    false       false       false   flase
    true        false       false   true    
    false       true        false   true

*/