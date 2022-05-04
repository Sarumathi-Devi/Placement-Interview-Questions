#include <bits/stdc++.h>
#define N 5 // can be anything accordingly

// NOTE : queue cannot have more than 5 values even an element is popped...!
// This condition comes under circular queue
#include <bits/stdc++.h>
#define N 5

// NOTE : queue cannot have more than 5 values even an element is popped...!
// This condition comes under circular queue

int queue[N];
int temp;

int front = -1; // head 
int back = -1;  // tail or rear

void push( int input )  // technically called as enqueue
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

void pop()  // technically called as dequeue
{
    if ( front == -1 ) std :: cout << "Queue underflow" << std :: endl;
    else if ( front == back ) front = back = -1;
    else 
    {
        std :: cout << "The popped element is : " << queue[front] << std :: endl;
        front += 1;
    }
}

void display()
{
    int ctr = front;
    while ( ctr < back )
        std :: cout << queue[ctr++] << std :: endl;
    std :: cout << std :: endl;
}

void top() // also known as peek
{
    if ( front == -1 ) std :: cout << "Stack underflow" << std :: endl;
    else std :: cout << queue[front] << std :: endl;
}

int main()
{
    int choice;
    int input;
    int num;

    std :: cout << "The given operations are...!" << std :: endl;
    std :: cout << "1. Push an element into the queue" << std :: endl;
    std :: cout << "2. Pop an element from the queue" << std :: endl;
    std :: cout << "3. Peek" << std :: endl;
    std :: cout << "4. Display" << std :: endl;
    
    while ( 1 )
    {
        std :: cout << "Your option from the given menu is = ";
        std :: cin >> num;
        
        switch( num )
        {
            case 1:
                std :: cout << "Enter the item to pushed into the queue = ";
                std :: cin >> input;
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
                std :: cout << "Invalid Number" << std :: endl;
                break;
        }
        std :: cout << "Do yeew wish to continue.. Print 1 to continue and 0 to end : ";
        std :: cin >> choice;
        
        std :: cout << std :: endl;
        if ( choice == 1 ) continue;
        else break;
    }
    std :: cout << "Thank Yeew";
  
    return 0;
}
