#include<stdio.h>

void Display(int ptr[],int iSize)
{
    int iNo = 0;

    for (iNo = 0 ; iNo < iSize ; iNo++)
    {
        printf("%d\n",ptr[iNo]);
    }
}   

int main()
{
    int Arr[5] = {10,20,30,40,50}; //static memory allocation 
    
    Display(Arr,5);   
    
    return 0;
}