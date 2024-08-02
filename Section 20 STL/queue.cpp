#include <iostream>
#include <queue>

template <typename T>
void display(std::queue<T> q) {
    std::cout << "[ ";
    while (!q.empty()) {
        T elem = q.front();
        q.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::queue<int> q;

    // Push initial elements into the queue
    for (int i : {1, 2, 3, 4, 5})
        q.push(i);
    
    // Display the queue
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;

    // Push a new element and display the queue
    q.push(100);
    display(q);

    // Pop two elements and display the queue
    q.pop();
    q.pop();
    display(q);

    // Empty the queue and display it
    while (!q.empty())
        q.pop();
    display(q);
    
    std::cout << "Size: " << q.size() << std::endl;

    // Push new elements and display the queue
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;

    // Modify the front and back elements and display the queue
    q.front() = 5;
    q.back() = 5000;

    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;

    return 0;
}