#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int iRet = 0;
    char Arr[30] = "Hello World";
    
    iRet = strlen(Arr);
    
    cout<<"Destination string : "<<iRet<<endl;
    
    return 0;
}