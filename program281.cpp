//display Addition of input 
//input- 5 
//output- 1+2+3+4+5 = 15 
//by iterative way Approch

#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;

    while(i >=1)
    {
        iSum = iSum + iNo;
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number : "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of Application "<<endl;
    
    return  0;
}