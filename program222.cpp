#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int iSize;

    ArrayX(int No)
    {
        cout<<"Inside Constructor" <<endl;
        iSize = No;
        Arr = new int[iSize];    //Allocate Resource
    }
    ~ArrayX()
    {
        cout<<"Inside Destructor "<<endl;
        delete []Arr;
    }
    void Accept()
    {
        int i = 0;

        cout<<"Enter the elements : "<<endl;
        for(i = 0 ; i < iSize ; i++)
        {
            cin>>Arr[i];
        }

    }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);   //object of class ArrayX

    aobj.Accept();
    
    
    return 0;
}