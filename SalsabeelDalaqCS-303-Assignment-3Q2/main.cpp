#include "MyQueue.h"
#include <iostream>

int main() {
    MyQueue q;

    q.enqueue(1);           // Insert element 1 at rear
    q.enqueue(2);           // Insert element 2 at rear
    q.enqueue(3);           // Insert element 3 at rear
    std::cout << "Size of queue: " << q.getSize() << std::endl;      // Output: 3

    std::cout << "Front element: " << q.peek() << std::endl;         // Output: 1
    std::cout << "Removed element: " << q.dequeue() << std::endl;    // Output: 1

    std::cout << "Size of queue: " << q.getSize() << std::endl;      // Output: 2

    q.enqueue(4);           // Insert element 4 at rear
    std::cout << "Front element: " << q.peek() << std::endl;         // Output: 2

    std::cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << std::endl; // Output: No

    return 0;
}
