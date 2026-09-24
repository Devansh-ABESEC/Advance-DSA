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
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return;
        }


        cout << queue[front] << " deleted from queue." << endl;

        if (front == rear) {
            // Queue becomes empty
            front = -1;
            rear = -1;
        } else if (rear =0){
            rear =  size-1;
        }
        int value = queue[rear];
        rear = rear-1;
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

    
    q.display();

    q.dequeue();
    q.dequeue();
    // Testing underflow
    while (!q.isEmpty()) {
        q.dequeue();
    }

    q.dequeue();

    q.display();

    return 0;
}