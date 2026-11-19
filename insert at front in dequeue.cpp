#include <iostream>
using namespace std;

class Dequeue {
private:
    int *queue;
    int front, rear, size;

public:
    Dequeue(int n) {
        size = n;
        queue = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }

        else if (isEmpty()) {
            front = 0;
            rear=0;
        }
        else if(front = 0)
        {
            front =size-1;
        }
        else
        {
            front = front-1;
        }
        queue[front] = value;

        cout << value << " inserted into queue." << endl;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Final Queue: ";

        int i = front;

        while (true) {
            cout << queue[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }

    Dequeue() {
        delete[] queue;
    }
};

int main() {
    int n;

    cout << "Enter queue size: ";
    cin >> n;

    Dequeue q(n);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    // Testing overflow
    q.enqueue(70);
    q.display();

    return 0;
}