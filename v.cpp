#include <iostream>
#include <vector>

int main() {
    // Creating a vector of integers
    std::vector<int> myVector;

    // Checking the initial size and capacity
    std::cout << "Initial size: " << myVector.size() << std::endl;
    std::cout << "Initial capacity: " << myVector.capacity() << std::endl;

    // Adding elements to the vector
    for (int i = 1; i <= 10; ++i) {
        myVector.push_back(i * 10);
        std::cout << "Size after adding " << i << " element(s): " << myVector.size() << std::endl;
        std::cout << "Capacity after adding " << i << " element(s): " << myVector.capacity() << std::endl;
    }

    // Displaying the elements in the vector
    std::cout << "Elements in the vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
