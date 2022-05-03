#include <bits/stdc++.h>
using std :: cout;
using std :: cin;
using std :: endl;

class node
{
    public: 
        int data;
        struct node* next;
};

struct node* topidx = NULL;
struct node* temp = NULL;

void push( int input )
{
    struct node* newNode;
    newNode = new node();
    newNode -> data = input;
    
    if ( topidx == NULL ) topidx = temp = newNode;
    else 
    {
        newNode -> next = topidx;
        topidx = newNode;
    }
}

void pop()
{
    if ( topidx == NULL ) cout << "Stack Underflow" << endl;
    else
    {
        cout << topidx -> data << endl;
        temp = topidx;
        topidx = topidx -> next;
        free(temp);
    }
}

void top()
{
    if ( topidx == NULL ) cout << "Stack underflow" << endl;
    else 
    {
        cout << topidx -> data;
    }
}

void display()
{
    temp = topidx;
    while ( temp != NULL )
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main()
{
    int choice;
    int input;
    int num;

    cout << "The given operations are...!" << endl;
    cout << "1. Push an element into the stack" << endl;
    cout << "2. Pop an element from the stack" << endl;
    cout << "3. Show the top element" << endl;
    cout << "4. Display" << endl;
    
    while ( 1 )
    {
        cout << "Your option from the given menu is = ";
        cin >> num;
        
        switch( num )
        {
            case 1:
                cout << "Enter the item to pushed into the stack = ";
                cin >> input;
                push(input);
                break;
            case 2:
                pop();
                break;
            case 3:
                top();
                break;
            case 4:
                display();
                break;
            default:
                cout << "Invalid Number" << endl;
                break;
        }
        cout << "Do yeew wish to continue.. Print 1 to continue and 0 to end : ";
        cin >> choice;
        
        cout << endl;
        if ( choice == 1 ) continue;
        else break;
    }
    cout << "Thank Yeew";
    return 0;
}
