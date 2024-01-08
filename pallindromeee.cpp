#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    // Using iterators to traverse the string
    auto start = str.begin();
    auto end = str.end() - 1;

    while (start < end) {
        if (*start != *end) {
            return false; // If characters don't match, it's not a palindrome
        }
        ++start;
        --end;
    }
    return true; // If the loop completes without returning false, it's a palindrome
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    // Convert the input string to lowercase
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
