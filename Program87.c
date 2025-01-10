//input : 5
//output : -5   -4   -3    -1    -1    0   1   2   3   4
#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;
    
    for(iCnt = -ino ; iCnt <= ino  ; iCnt++) 
    {
       printf("%d \t ",iCnt);    
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