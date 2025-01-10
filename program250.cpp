#include<iostream>
using namespace std;

void strcpyX(char* Dest, char *Src) //Dest = Destination,Src = Source
{
    while(*Src != '\0')
    {
        *Dest = *Src;  

        Src++;
        Dest++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    
    cout<<"Enter the Source String : "<<endl;
    cin.getline(Arr,30);

    strcpyX(Brr,Arr);
    
    cout<<"Destination String is : "<<Brr<<endl;
    
    return 0;
}