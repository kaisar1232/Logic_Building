//problems on string
//just accepting name from user
//use getline function to get string line input from user

#include<iostream>
using namespace std;

//user defined strlen function 
int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter Your Name : "<<endl;
    cin.getline(Arr,30);    //getline function

    iRet = strlenX(Arr);
    
    cout<<"Length of string is : "<<iRet<<endl;
    
    return 0;
}