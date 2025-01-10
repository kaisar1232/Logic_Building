#include<stdio.h>
/*
    0 to 35 = Fail
    35 to 50 = Pass Class
    50 to 60 = Second Class
    60 to 75 = First class
    75 to 100 = First class with Distinction
*/

//User Defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks <0.0f) || fMarks>100.0f) //filter
    {
       return RET_INVALID;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if ((fMarks >= 35.0f) && (fMarks <50.0f))
    {
        return RET_PASSCLASS;
    }
    else if((fMarks >= 50.0f) && (fMarks <60.0f))
    {
        return RET_SECONDCLASS;
    }
    else if((fMarks >= 60.0f) && (fMarks <=75.0f))
    {
        return RET_FIRSTCLASS ;
    }
    else if((fMarks >= 75.0f ) && (fMarks <= 100.0f))
    {
        return RET_DISTINCTION;
    }
}

int main()
{   
    float fValue = 0.0f;
    int iRet = 0;
    
    printf("Please Enter Your Percentage : \n");
    scanf("%f", &fValue); 
    
    iRet = DisplayResult(fValue);

    if(iRet == RET_INVALID)
    {
       printf("Your input is Invalid...!\n");
    }
    else if(iRet == RET_FAIL)
    {
       printf("Student is Fail...!\n");
    }
    else if(iRet == RET_PASSCLASS)
    {
        printf("Student is PassClass...!\n");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is Second Class...!\n");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is First Class...!\n");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is First class with Distinction...!\n");
    }
    return 0; 
}
