//Number of Small Letters from string
//ASCII value of a & z

#include<stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= 97) && (*str <=122))
        {
            iCnt ++;
        }    
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr [20];
    int iRet = 0;
    
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenCapX(Arr);

    printf("Number of Capital Letter is : %d \n",iRet);

    return 0;
}