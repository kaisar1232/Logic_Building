//it prints odd digit from number
//input = 7896
//output = 8 6

#include<stdio.h>

int OddDisplay(int iNo)
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
        iNo = iNo / 10; 
        if(iDigit % 2 !=0 )
        {
            printf("%d\n",iDigit);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
       
    return 0;
}

