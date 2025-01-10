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

    cout<<"Enter the elements : "<<endl;
    
    for(i = 0 ; i < iLength ; i++)
    {
        cin>>ptr[i];
    }
    
    cout<<"Enterd Elements are : "<<endl;
    for(i = 0 ; i < iLength ; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;
    
    return 0;
}