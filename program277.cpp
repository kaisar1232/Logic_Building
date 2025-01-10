//display number input by user
//by recursive way

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;    //add storage class
    
    if( iCnt <=iNo )    //remove while and add if
    {
        cout<<iCnt<<endl;
        iCnt++;
        Display(iNo);   //add recursive function 
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