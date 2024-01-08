#include <iostream>
#include <vector> 

int largestElement(std::vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    std::vector<int> numbers = {4, 2, 9, 7, 1, 5};
    int result = largestElement(numbers, numbers.size());
    std::cout << "The largest element is: " << result << std::endl;
    return 0;
}
