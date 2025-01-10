#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 1 ;
    while( iCnt <=4 )
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
    
}

int main()
{

    Display();
    
    return 0;
}