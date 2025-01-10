#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
//typedef struct node** PPNODE; (we dont need this pointer in c++)

class SinglyLL
{
    public:
    PNODE First;
    int iCount;
    
    //Behaviours
    SinglyLL();     //Constructor
        
    void Display(); 
    int Count();
    
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPo(int No,int iPos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    
};
//friend functions
SinglyLL::SinglyLL()              
{
    cout<<"Inside Constrcutor\n";
    First = NULL;
    iCount = 0;
}
void SinglyLL::Display()
{}
int SinglyLL::Count()
{
    return iCount;
}
void SinglyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;
    
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First  = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL::InsertLast(int No)
{}
void SinglyLL::InsertAtPo(int No,int iPos)
{}

void SinglyLL::DeleteFirst()
{}
void SinglyLL::DeleteLast()
{}
void SinglyLL::DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;
    
    return 0;
}