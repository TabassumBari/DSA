#include <iostream>

using namespace std;
class Queue {
private:
    int front, rear, capacity;
    int* queue;

public:
    Queue(int size) {
        capacity = size;
        front = rear = -1;
        queue = new int[size];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        queue[rear] = item;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    cout << "Queue is Empty" << endl;

    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(2);

    cout << "Queue is not Empty" << endl;
    cout << "Queue is not full" << endl;

    q.enqueue(6);

    cout << "Values in the queue: ";
    q.printQueue();

    cout << "Queue is Full" << endl;

    q.enqueue(8);

    q.dequeue();
    q.dequeue();

    cout << "Values in the queue: ";
    q.printQueue();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Queue is Empty" << endl;

    q.dequeue();

    return 0;
}

