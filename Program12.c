#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return false;
    }
    else 
    {
        return true;
    }
}

int main()
{   
    float fValue = 0.0f;
    bool bRet = false;
    
    printf("Please Enter Your Percentage : \n");
    scanf("%f", &fValue); // Changed %d to %f for float input

    bRet = DisplayResult(fValue);

    if(bRet == true)
    {
        printf("Student is Pass in the Exam\n");
    }
    else
    {
        printf("Student is Fail in the Exam\n");
    }
    
    return 0; // Removed semicolon
}
