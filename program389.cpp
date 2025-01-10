#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    private:
    PNODE First;
    PNODE Last;
    int iCount;  // Changed from PNODE to int

    public:
    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No,int iPos);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyCL::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;  // Initialize the count to 0
}

void DoublyCL::Display()
{
    // Display function implementation
}

int DoublyCL::Count()  // Changed return type to int
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{
    // InsertFirst function implementation
}

void DoublyCL::InsertLast(int No)
{
    // InsertLast function implementation
}

void DoublyCL::InsertAtPos(int No, int iPos)
{
    // InsertAtPos function implementation
}

void DoublyCL::DeleteFirst()
{
    // DeleteFirst function implementation
}

void DoublyCL::DeleteLast()
{
    // DeleteLast function implementation
}

void DoublyCL::DeleteAtPos(int iPos)
{
    // DeleteAtPos function implementation
}

int main()
{
    DoublyCL obj;

    return 0;
}
