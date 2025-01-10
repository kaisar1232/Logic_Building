//Program Accepts Number From User That How Many Number Of Times You Want To Display On Screen
//Using while loop

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
    
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("Jay Hanuman....\n");
        iCnt++;
        
    }
}

int main()
{
    int iValue =0;

    printf("Enter the Number Of Times That You Want To Display \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}