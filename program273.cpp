//recursive appraoch 3 using recurssion

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;

    if( iCnt <=4 )
    {
        cout<<"*"<<endl;
        iCnt++;
        Display();
    }
}

int main()
{
    Display();
    
    return  0;
}