#include <iostream>
using namespace std;

int reverseInteger(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int um;
    std::cout << "Enter an integer: ";
    std::cin >> um;

    int reversedNum = reverseInteger(um);

    std::cout << "Reversed integer: " << reversedNum << std::endl;

    return 0;
}
