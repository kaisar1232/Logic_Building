//input : 5
//output : 12345 *****
//time complexity  = 2(n)

#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <=ino ; iCnt++) // this loop helps to show 1st group i.e 12345
    {
        printf("%d \t",iCnt);  
    }
    for(iCnt = 1 ; iCnt <=ino ; iCnt++) // this loop helps to show 2nd group i.e *****
    {
        printf("*\t");
    }
    printf(" \n ");
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}