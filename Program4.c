//Accept Two Numbers From User And Perform Its Addition
//With Better Coding Conventions....
#include<stdio.h>

int main()
{
    //int i, j, k;  //Don`t Use Like This.(Bad Coding Convention)
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;
    
    printf("Enter Firste Number\n");
    scanf("%f",&fValue1);
    
    printf("Enter Second Number\n");
    scanf("%f",&fValue2);
    
    fResult = fValue1 + fValue2;
    
    printf("Addition Is : %f\n",fResult);
    
    return 0; 
}