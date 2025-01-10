//application is to accept one number from user 
//it gives the factors of input number

#include<stdio.h>

//Time Complexity : O( N ) 

void DisplayFactors(int iNo)
{
    int icnt = 0;

    printf("Factors of %d are : \n",iNo);
    
    for( icnt = 1; icnt < iNo ; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
        
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n ");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    
    return 0;
}