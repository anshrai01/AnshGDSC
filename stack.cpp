#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    Stack() {
        top = nullptr;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top == nullptr);
    }

    // Push operation to insert an element into the stack
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        std::cout << value << " pushed into the stack." << std::endl;
    }

    // Pop operation to remove an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow. The stack is empty." << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << temp->data << " popped from the stack." << std::endl;
        delete temp;
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            std::cout << "The stack is empty." << std::endl;
            return -1; // Return an arbitrary value for an empty stack
        }
        return top->data;
    }

    // Display the stack elements
    void display() {
        if (isEmpty()) {
            std::cout << "The stack is empty." << std::endl;
            return;
        }
        Node* temp = top;
        std::cout << "Stack elements: ";
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    stack.display();

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.display();

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
