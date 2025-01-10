//display Addition of input 
//input- 5 
//output- 1+2+3+4+5 = 15 
//by iterative way Approch

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;
    int i = 1;
    
    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"End of Application "<<iRet<<endl;
    
    return  0;
}