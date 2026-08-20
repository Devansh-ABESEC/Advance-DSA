#include <bits/stdc++.h>

using namespace std;

class Stack
{
    int arr[20];
    int top;
    int size;

    public:

        Stack(int N)
        {
            size = N;
            top = -1;
        }
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow";
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow";
        }

        cout << "Element which is gettig deleted:"<<" "<<arr[top]<<endl;
        top--;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Empty Stack";
        }
         cout <<"Stack created:"<<endl;
        for (int i = top; i >= 0; i--)
        {
           
            cout<< arr[i]<<" ";
        }
    }
};

int main()
{
    int N;
    cin >> N;
    Stack s(N);
    s.push(10);
    s.push(20);
    s.push(35);
    s.pop();
    s.push(100);
    s.display();

}