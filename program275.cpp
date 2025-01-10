//recursive appraoch 3 using recurssion

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;
    
    if( iCnt <=iNo )
    {
        cout<<"*"<<endl;
        iCnt++;
        Display(iNo);
    }
    cout<<"End Of Display"<<endl;
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