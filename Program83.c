//input : 5
//output : 5  *   4  *  3  *  2  *  1   
#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;
    
    for(iCnt =ino ; iCnt >= 1 ; iCnt--) 
    {
       printf("%d \t",iCnt);
       printf(" * \t");    
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