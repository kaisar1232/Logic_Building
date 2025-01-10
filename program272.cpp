//recursive appraoch 2 using recurssion

#include<iostream>
using namespace std;

//print 4 times *
//Approach 1 using while loop

void Display()
{
    auto  iCnt = 1;

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