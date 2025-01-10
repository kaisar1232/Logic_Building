//copy only Letters except white space from destination 
//source : Hello World
//Destination : HelloWorld

#include<iostream>
using namespace std;

void strcpyXSpace(char* Dest, char *Src) //Dest = Destination,Src = Source
{
    while(*Src != '\0')
    {
        if((*Src != ' '))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    
    cout<<"Enter the Source String : "<<endl;
    cin.getline(Arr,30);

    strcpyXSpace(Brr,Arr);
    
    cout<<"Destination String is : "<<Brr<<endl;
    
    return 0;
}