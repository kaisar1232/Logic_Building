//Accept Two Numbers From User And Perform Its Addition

#include<stdio.h>

int main()
{
    int i, j, k;

    printf("Enter Firste Number\n");
    scanf("%d",&i);

    printf("Enter Second Number\n");
    scanf("%d",&j);
    
    k = i + j;
    
    printf("Addition Is : %d\n",k);
    
    return 0; 
}