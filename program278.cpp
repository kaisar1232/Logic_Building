//display number input by user decending order
//input- 5 
//output- 5 4 3 2 1 
//by itretive way Approch

#include<iostream>
using namespace std;

void Display(int iNo)
{
    while(iNo >=1)
    {
        cout<<iNo<<endl;
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