//Program Accepts Number From User That How Many Number Of Times You Want To Display On Screen
//Using for loop
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;       //i=int,Cnt=Counter

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number Of Times You Want To Display On Screen :\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}