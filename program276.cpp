//display number input by user

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 1;
    
    while( iCnt <=iNo )
    {
        cout<<iCnt<<endl;
        iCnt++;
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