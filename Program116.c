//it is same as last code but ptr++ is written inside for loop
//at the timing of writing inside for loop we have to use ',' dont use';' at last 

#include<stdio.h>

void Display(int *ptr,int iSize)
{
    int iNo = 0;

    for (iNo = 0 ; iNo < iSize ; iNo++, ptr++)
    {
        printf("%d\n",*ptr);
    }
}   

int main()
{
    int Arr[5] = {10,20,30,40,50}; //static memory allocation 
    
    Display(Arr,5);   
    
    return 0;
}