//copy only Capital Letters from destination 
//source : HellO WorlD
//Destination : HWOD

#include<iostream>
using namespace std;

void strcpyXCapital(char* Dest, char *Src) //Dest = Destination,Src = Source
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
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

    strcpyXCapital(Brr,Arr);
    
    cout<<"Destination String is : "<<Brr<<endl;
    
    return 0;
}