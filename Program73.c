//input : 5
//output : &    &    &   &   &   *   *   *   *   *

#include<stdio.h>

void Display (int ino)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <=ino ; iCnt++) // this loop helps to show 1st group i.e & & & & &
    {
        printf("&\t");  
    }
    for(iCnt = 1 ; iCnt <=ino ; iCnt++) // this loop helps to show 2nd group i.e * * * * *
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