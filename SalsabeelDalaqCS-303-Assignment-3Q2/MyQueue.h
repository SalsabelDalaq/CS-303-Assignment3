#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <queue>

class MyQueue {
private:
    std::queue<int> elements;

public:
    // Inserts a new element at the rear
    void enqueue(int element);

    // Removes the front element of the queue and returns it.
    int dequeue();

    // Returns the front element present in the queue without removing it.
    int peek();

    // Checks if the queue is empty
    bool isEmpty();

    // Returns the total number of elements present in the queue
    int getSize();
};

#endif
