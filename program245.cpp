//problems on string
//just accepting name from user
//use getline function to get string line input from user

#include<iostream>
using namespace std;

int main()
{
    char Arr[30];

    cout<<"Enter Your Name : "<<endl;
    cin.getline(Arr,30);    //getline function
    
    cout<<"Hello "<<Arr<<endl;
    
    return 0;
}