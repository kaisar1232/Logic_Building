//application accepts number from user
//prints the half of that number
//i.e if input is 50 then it prints 1 to 25

#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int icnt = 0;
    
    for( icnt = 1; icnt <= iNo /2  ; icnt++)
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