//input : 5
//output : -5 5 -4 4 -3  3 -2 2  -1 1  
#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;
    
    for(iCnt = -ino ; iCnt < 0  ; iCnt++) 
    {
       printf("%d \t ",-iCnt);
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