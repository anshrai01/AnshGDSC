#include <iostream>

void modifyAndPrint(int &x) {
    x = x * 2;
    std::cout << "value inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    modifyAndPrint(num);
    std::cout << "value in main: " << num << std::endl;

    return 0;
}
