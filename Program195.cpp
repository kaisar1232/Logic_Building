//Addition of 2 Number
//Approch 3

#include<iostream>
using namespace std;

class Arithmatic        
{
    public:
    int iNo1;
    int iNo2;

    Arithmatic(int A,int B)     //constructor
    {
        iNo1 = A;
        iNo2 = B;
    } 
    int Addition()  //function
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number:" <<endl;
    cin>>iValue1;

    cout<<"Enter Second Number:" <<endl;
    cin>>iValue2;

    Arithmatic aobj(iValue1,iValue2);   //object of class

    iRet = aobj.Addition(); //function calling 

    cout<<"Addition is : "<<iRet<<endl;
       
    return 0;
}