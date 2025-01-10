//recursive appraoch 2using recurssion

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 1;

    if( iCnt <=4 )
    {
        cout<<"*"<<endl;
        iCnt++;
    }
}

int main()
{
    Display();
    
    return  0;
}