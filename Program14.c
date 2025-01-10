#include<stdio.h>

int DisplayResult(float fMarks)
{
    if((fMarks <0.0f) || fMarks>100.0f) //filter
    {
       return 1;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return 2;
    }
    else 
    {
        return 3;
    }
}

int main()
{   
    float fValue = 0.0f;
    int iRet = 0;
    
    printf("Please Enter Your Percentage : \n");
    scanf("%f", &fValue); // Changed %d to %f for float input
    
    iRet = DisplayResult(fValue);

    if(iRet == 1)
    {
       printf("Your input is Invalid...!\n");
    }
    else if(iRet ==2)
    {
       printf("Student is Fail...!\n");
    }
    else if(iRet ==3)
    {
        printf("Student is Pass...!\n");
    }
    return 0; 
}
