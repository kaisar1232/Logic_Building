//Accept One Number From User and Get Input Is ODD or EVEN

#include<stdio.h>
#include<stdbool.h>

/* Algorithm
    Start
        Accept One Number as No
        Divide that number No by 2
        if remonder is 0
        then display the result as Even Number
        otherwise display the result as Odd Number
    Stop        
*/
///////////////////////////////////////////
//  Function Name : CheckEvenOdd
//  Description :   Used to check whether number is even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Kaisar Attar
//  Date :          16/04/2024
//
///////////////////////////////////////////
int CheckEvenOdd(unsigned int iNo)
{
    if ((iNo % 2)==0)
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

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }  
    else
    {
        printf("%d is Odd Number \n",iValue);
    } 

    return 0;
}