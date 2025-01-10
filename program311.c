#include<stdio.h>


int main()
{
    unsigned int iNo1 = 0, iNo2 = 0,iRet = 0;

    printf("Enter First Number \n");
    scanf("%u",&iNo1);

    printf("Enter Second Number \n");
    scanf("%u",&iNo2);
    
    iRet=iNo1 & iNo2;   //AND bit wise operator
    
    printf("Result of Bitwise operator is : %u\n",iRet);

    return 0;
}
