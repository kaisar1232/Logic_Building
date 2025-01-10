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

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);        
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside constructor\n";
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = First;

    cout<<"\nNULL <=> ";
    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | <=> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn-> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn -> next = (First);

        (First) -> prev = newn;

        (First) = newn;
    }
    iCount++;
}

void DoublyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;

    newn->data = No;
    newn-> next = NULL;
    newn -> prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
       while(temp->next != NULL)
       {
            temp = temp-> next;
       } 
       temp -> next = newn;
       temp -> next -> prev = temp;
    }
    iCount++;   
}

void DoublyLL::InsertAtPos(int No, int iPos)
{
    PNODE temp = First;
    int i = 0;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new NODE;

        newn -> data = No;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(i = 1 ; i < iPos - 1; i++)
        {
            temp = temp ->  next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
        newn -> prev = temp;

        iCount++;
    }
}

void DoublyLL::DeleteFirst()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"Unable to add elements\n";
        return;
    }
    else if(First -> next == NULL)
    {
        free(First);
        First = NULL;
    }
    else
    {
        First = First -> next;
        free(temp);
    }
    iCount--;
}

void DoublyLL::DeleteLast()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"Unable to add elements\n";
        return;
    }
    else if(First -> next == NULL)
    {
        free(First);
        First = NULL;
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
    PNODE temp = First;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for(i = 1 ; i < iPos - 1; i++)
        {
            temp = temp ->  next;
        }
        
        temp -> next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertFirst(101);

    obj.InsertLast(111);
    obj.InsertLast(151);
    
    obj.DeleteAtPos(3);

    // obj.DeleteFirst();
    //obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<endl; 

    

    return 0;
}