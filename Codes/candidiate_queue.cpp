#include <iostream>
#include <string.h>

#define max 10
using namespace std;

string que[max];

int front = -1;
int rear = -1;

void enque()
{
    if (rear == max - 1)
    {
        cout << "The queue is fully" << endl;
    }
    else
    {
        string add;
        cout << "Enter the name of the candidiate" << endl;
        cin >> add;
        rear += 1;
        que[rear] = add;
        if (front == -1)
        {
            front = 0;
        }
        cout << "! ELEMENT ENTERED !" << endl;
    }
}

void shift()
{
    int i = 0;
    while (i < rear)
    {
        que[i] = que[i + 1];
        i += 1;
    }
    rear -= 1;
}

void deque()
{
    if (rear == -1)
    {
        cout << "The queue is EMPTY" << endl;
    }
    else
    {
        if (front == 0 && rear == 0)
        {
            cout << "Deleted candidiate is" << que[0] << endl;
            front = -1;
            rear = -1;
        }
        else
        {
            cout << "Deleted candidiate is" << que[0] << endl;
            shift();
        }
    }
}

void display()
{
    if (rear == -1)
    {
        cout << "! THE QUEUE IS EMPTY !" << endl;
    }
    else
    {
        int flag = rear;
        cout << "----------------------------------" << endl;
        while (flag != -1)

        {

            cout << que[flag] << endl;
            flag -= 1;
        }
        cout << endl
             << "----------------------------------" << endl;
    }
}

int main()
{
    void enque();
    void shift();
    void deque();
    void display();
    while (1)
    {
        cout << "Enter 1 to add a new candidiate to the queue\n";
        cout << "Enter 2 to delete a candidiate from the queue\n";
        cout << "Enter 3 to display the queue\n";
        cout << "Enter 0 to exit the program\n";
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            enque();
        }
        else if (choice == 2)
        {
            deque();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 0)
        {
            exit(0);
        }
        else
        {
            cout << "INVALID INPUT" << endl;
        }
    }
}
