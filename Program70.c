//input : 5
//output : 1 * 2 * 3 * 4 * 5  *

#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <=ino ; iCnt++)
    {
        printf("%d \t * \t",iCnt);// here we use in single line 
        
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