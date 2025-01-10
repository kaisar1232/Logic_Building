#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node* PNODE;
//typedef struct node** PPNODE; we dont need this pointer in c++

class SinglyLL
{
    public:
    PNODE First;
    int iCount;
    
    SinglyLL(); //Constructor
    
    //Behaviours
    void Display(); 
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPo(int No,int iPos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    
};
SinglyLL::SinglyLL()              //friend function
{
    cout<<"Inside Constrcutor\n";
    First = NULL;
    iCount = 0;
}

int main()
{
    SinglyLL obj;
    
    return 0;
}