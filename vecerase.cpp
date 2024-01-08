#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 4, 6, 2, 8, 9};

    // Displaying the original vector
    cout << "Original Vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    v.erase(v.begin()+1, v.begin() + 3);

    // Displaying the modified vector after erasing
    cout << "Modified Vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
