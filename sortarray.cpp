#include <iostream>
#include <algorithm>

// Custom comparator function for sorting in descending order
bool compareDescending(int a, int b) {
    return a > b;  // Change '>' to '<' for ascending order
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting the elements in the array in descending order
    std::sort(arr, arr + size, compareDescending);

    // Display the sorted array in descending order
    std::cout << "Sorted array ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
