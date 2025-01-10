//display Addition of input 
//input- 5 
//output- 1+2+3+4+5 = 15 
//by recursive way Approch

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum = 0;
    static int i = 1;
    
    if(i <= iNo)
    {
        iSum = iSum + i;
        i++;
        Addition(iNo);
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