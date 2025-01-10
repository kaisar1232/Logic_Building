#include<iostream>
using namespace std;

//iterative method
//print 4 times *
//Approach 1 using while loop

void Display()
{
    int iCnt = 1;

    while( iCnt <=4 )
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