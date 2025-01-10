//Accept Two Numbers From User And Perform Its Addition
//With Better Coding Conventions....
#include<stdio.h>

int main()
{
    //int i, j, k;  //Don`t Use Like This.(Bad Coding Convention)
    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;
    
    printf("Enter Firste Number\n");
    scanf("%d",&iValue1);
    
    printf("Enter Second Number\n");
    scanf("%d",&iValue2);
    
    iResult = iValue1 + iValue2;
    
    printf("Addition Is : %d\n",iResult);
    
    return 0; 
}