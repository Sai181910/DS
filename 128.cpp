#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};


class Stack
{
    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

   
    void push(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack." << endl;
    }

   
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        Node* temp = top;
        cout << temp->data << " popped from stack." << endl;

        top = top->next;
        delete temp;
    }

    
    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Top element = " << top->data << endl;
        }
    }

    
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* temp = top;

        cout << "Stack elements (Top to Bottom): ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
    void isEmpty()
    {
        if (top == NULL)
            cout << "Stack is Empty." << endl;
        else
            cout << "Stack is Not Empty." << endl;
    }
};

int main()
{
    Stack s;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "\nPushing array elements into stack:\n";
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }

    cout << "\nDisplay Stack:\n";
    s.display();

    cout << "\nPeek Operation:\n";
    s.peek();

    cout << "\nPop Operation:\n";
    s.pop();

    cout << "\nStack After Pop:\n";
    s.display();

    cout << "\nCheck Stack Status:\n";
    s.isEmpty();

    return 0;
}
