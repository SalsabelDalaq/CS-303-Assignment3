#include "MyQueue.h"
#include <iostream>

void MyQueue::enqueue(int element) {
    elements.push(element);
}

int MyQueue::dequeue() {
    if (!elements.empty()) {
        int frontElement = elements.front();
        elements.pop();
        return frontElement;
    } else {
        std::cerr << "Queue is empty. Cannot dequeue elements." << std::endl;
        return -1;  // Return a default value or throw an exception as needed
    }
}

int MyQueue::peek() {
    if (!elements.empty()) {
        return elements.front();
    } else {
        std::cerr << "Queue is empty. Cannot peek elements." << std::endl;
        return -1;  // Return a default value or throw an exception as needed
    }
}

bool MyQueue::isEmpty() {
    return elements.empty();
}

int MyQueue::getSize() {
    return elements.size();
}
