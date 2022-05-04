#include <bits/stdc++.h>
#define N 5 // can be anything accordingly

// NOTE : queue cannot have more than 5 values even an element is popped...!
// This condition comes under circular queue

int queue[N];
int temp;

int front = -1; // head 
int back = -1;  // tail or rear

inline void push( int input )  // technically called as enqueue
{
    if ( back == (N-1) ) 
        std :: cout << "Queue Overflow" << std :: endl;
    else if ( front == -1 && back == -1 )
    {
        front = back = 0;
        queue[back] = input;
        back += 1;
    }
    else
    {
        queue[back] = input;
        back += 1;
    }
}

inline void pop()  // technically called as dequeue
{
    if ( front == -1 ) std :: cout << "Queue underflow" << std :: endl;
    else if ( front == back ) front = back = -1;
    else 
    {
        std :: cout << "The popped element is : " << queue[front] << std :: endl;
        front += 1;
    }
}

inline void display()
{
    int ctr = front;
    while ( ctr < back )
        std :: cout << queue[ctr++] << std :: endl;
    std :: cout << std :: endl;
}

inline void top() // also known as peek
{
    if ( front == -1 ) std :: cout << "Stack underflow" << std :: endl;
    else std :: cout << queue[front] << std :: endl;
}

int main()
{
    int choice;
    int input;
    int num;

    cout << "The given operations are...!" << endl;
    cout << "1. Push an element into the queue" << endl;
    cout << "2. Pop an element from the queue" << endl;
    cout << "3. Peek" << endl;
    cout << "4. Display" << endl;
    
    while ( 1 )
    {
        cout << "Your option from the given menu is = ";
        cin >> num;
        
        switch( num )
        {
            case 1:
                cout << "Enter the item to pushed into the queue = ";
                cin >> input;
                push(input); // enqueue
                break;
            case 2:
                pop();  // dequeue
                break;
            case 3:
                top();  // peek
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
