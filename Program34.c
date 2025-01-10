//we have to stop one digit before final input

#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int icnt = 0;
    
    for( icnt = 1; icnt < iNo ; icnt++)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}