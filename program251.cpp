//copy only small Letters from destination 
//source : Hello World
//Destination : lloord

#include<iostream>
using namespace std;

void strcpyXSmall(char* Dest, char *Src) //Dest = Destination,Src = Source
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <= 'z'))
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

    strcpyXSmall(Brr,Arr);
    
    cout<<"Destination String is : "<<Brr<<endl;
    
    return 0;
}