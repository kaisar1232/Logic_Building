//accept n numbers from user return average 

#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;

    int *ptr = NULL;

    cout<<"Enter Number Of Elements That ou Wants To Store : "<<endl;
    cin>>iLength;

    ptr = new int [iLength];

    delete []ptr;
    
    return 0;
}