//it prints digits from number
//input = -7896
//output = 6 9 8 7
//we use updater to show all positive digits in negative number

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)      //updater
    {
        iNo = -iNo;
    }

    while(iNo > 0) 
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

