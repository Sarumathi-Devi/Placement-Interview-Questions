#include <bits/stdc++.h>
using std :: cin;
using std :: cout;
using std :: endl;

#define N 5     // maximum no of elements is declared here as 5 we can allocate according to our wish
int stack[N] = {0};
int topidx = -1;
int value;
int ctr;

inline void push( int input )
{
    if ( topidx == (N-1) ) cout << "Stack Overflow" << endl;
    else
    {
        topidx += 1;
        stack[topidx] = input;
    }
}

inline void pop ()
{
    if ( topidx == -1 ) cout << "Stack Underflow" << endl; // if there is no element in the std::stack<T> ;
    else 
    {
        value = stack[topidx];
        topidx -= 1;
        cout << value << endl;
    }
}

inline void top()
{
    if ( topidx == -1 ) 
        cout << "Stack Underflow" << endl;
    else
        cout << stack[topidx] << endl;
}

void display()
{
    ctr = topidx;
    while ( ctr > -1 )
    {
        cout << stack[ctr] << " ";
        ctr -= 1;
    }
    cout << endl;
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
